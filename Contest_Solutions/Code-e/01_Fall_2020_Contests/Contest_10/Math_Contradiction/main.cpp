#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<ll> par(n+1);
        iota(par.begin(), par.end(), 0);
        
        function<ll(ll)> find = [&](ll x){
            return (x == par[x]) ? x : par[x] = find(par[x]);
        };    
        
        function<void(ll, ll)> unite = [&](ll a, ll b){
            a = find(a), b = find(b);
            if(a != b)
                par[a] = par[b];
        };
        
        vector<array<ll, 2>> unequal;
        for(int i = 0; i < m; i++){
            ll x, y;
            string op;
            cin>>x>>op>>y;
            if(op == "!=")
                unequal.push_back({x, y});
            else{
                unite(x, y);
            }
        }
        
        bool valid = 1;
        for(int i = 0; i < unequal.size(); i++){
            ll x = find(unequal[i][0]);
            ll y = find(unequal[i][1]);
            if(x == y)
                valid = 0;
        }
        
        if(valid)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}