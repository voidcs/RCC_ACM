#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
 
int main(){
    int n, m, x;
    cin>>n>>m;
    multiset<int> s;
    for(int i = 0; i < n; i++){
        cin>>x;
        s.insert(x);
    }
    while(m--){
        cin>>x;
        auto it = s.upper_bound(x);
        if(it == s.begin())
            cout<<"-1\n";
        else{
            it--;
            cout<<*it<<endl;
            s.erase(it);
        }
    }
    return 0;
}