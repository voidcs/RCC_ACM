#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> g(n, vector<char>(m));
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        int sx, sy, ex, ey;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>g[i][j];
                if(g[i][j] == 'A')
                    sx = i, sy = j;
                if(g[i][j] == 'B')
                    ex = i, ey = j;
            }
        }
        
        auto valid = [&](int x, int y){
            return x >= 0 && x < n && y >= 0 && y < m && g[x][y] != '#' && dist[x][y] == 1e9;  
        };
        
        dist[sx][sy] = 0;
        queue<array<int, 2>> q;
        q.push({sx, sy});
        while(!q.empty()){
            int x = q.front()[0];
            int y = q.front()[1];
            q.pop();
            for(int i = 0; i < 8; i++){
                int nx = x + dir[i][0];
                int ny = y + dir[i][1];
                if(valid(nx, ny)){
                    dist[nx][ny] = min(dist[nx][ny], dist[x][y] + 1);
                    q.push({nx, ny});
                }
            }
        }
        if(dist[ex][ey] == 1e9)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<dist[ex][ey]<<endl;
        }
    }
    return 0;
}