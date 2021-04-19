#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int dir[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> g(n, vector<char>(m));
    vector<vector<int>> vis(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>g[i][j];
    auto valid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && g[x][y] == 'w';  
    };
    function<void(int, int)> dfs = [&](int x, int y){
        vis[x][y] = 1;
        for(int i = 0; i < 8; i++){
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];
            if(valid(nx, ny)){
                vis[nx][ny] = 1;
                dfs(nx, ny);
            }
        }
    };
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(valid(i, j)){
                ans++;
                dfs(i, j);
            }
        }
    }
    cout<<ans;
    
    return 0;
}