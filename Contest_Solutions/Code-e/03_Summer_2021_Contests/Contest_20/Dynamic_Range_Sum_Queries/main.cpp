#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> p(n+1);
    for(int i = 0; i < m; i++){
        int x, l, r;
        cin>>x>>l>>r;
        p[l-1] += x;
        p[r] -= x;
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += p[i];
        cout<<sum<<" ";
    }
    cout<<endl;
    return 0;
}