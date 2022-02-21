#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> par(n+1);
        iota(begin(par), end(par), 0);
        
        function<int(int)> find = [&](int x){
            return (x == par[x]) ? x : par[x] = find(par[x]);
        };
        
        auto unite = [&](int x, int y){
            x = find(x), y = find(y);
            if(x != y)
                par[x] = y;
        };
        vector<pair<int, int>> unequal;
        for(int i = 0; i < m; i++){
            int x, y;
            string op;
            cin>>x>>op>>y;
            if(op == "!=")
                unequal.push_back({x, y});
            else{
                unite(x, y);
            }
        }
        
        bool valid = 1;
        for(auto [x, y]: unequal){
            x = find(x);
            y = find(y);
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