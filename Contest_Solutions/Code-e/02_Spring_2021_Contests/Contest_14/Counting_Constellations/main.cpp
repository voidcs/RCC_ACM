#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> adj(n+1);
        vector<int> vis(n+1);
        while(m--){
            int a, b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        function<void(int)> dfs = [&](int u){
            vis[u] = 1;
            for(int c: adj[u]){
                if(!vis[c]){
                    vis[c] = 1;
                    dfs(c);
                }
            }
        };
        int ans = 0;
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