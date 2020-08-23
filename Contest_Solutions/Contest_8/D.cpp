#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    
    int need = 1;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int have = pq.top();
        pq.pop();
        if(have >= need){
            ans++;
            need++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}