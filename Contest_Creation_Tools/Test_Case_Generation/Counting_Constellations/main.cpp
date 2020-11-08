#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
    vector<int> answers;
    int t = 10;
    cout<<t<<endl;
    while(t--){
        int n = 50 + rand() % 50;
        int m = rand() % n + 1;
        //m *= 2;
        cout<<n<<" "<<m<<endl;
        vector<vector<int>> adj(n+1, vector<int>(n+1));
        vector<bool> vis(n+1);
        for(int i = 0; i < m; i++){
            ll x = rand() % n + 1;
            ll y = rand() % n + 1;
            while(x == y){
                y = rand() % n + 1;
            }
            adj[x].push_back(y);
            adj[y].push_back(x);
            cout<<x<<" "<<y<<endl;
        }
        cout<<endl;
        
        function<void(int)> dfs = [&](int node){
            vis[node] = 1;
            for(int c: adj[node]){
                if(!vis[c])
                    dfs(c);
            }
        };
        
        int cc = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                cc++;
                dfs(i);
            }
        }
        answers.push_back(cc);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}