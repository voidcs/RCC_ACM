#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<vector<int>> adj(n+1);
        vector<bool> vis(n+1, 0);
        
        for(int i = 0; i < m; i++){
            ll x, y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        function<void(ll)> dfs = [&](ll node){
            vis[node] = 1;
            for(int child: adj[node]){
                if(!vis[child])
                    dfs(child);
            }
        };

        ll ans = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                ans++;
                dfs(i);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}