#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int dir[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<char>> vis(n, vector<char>(m));
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>a[i][j];
    
    function<bool(int, int)> isValid = [&](int x, int y){
        if(x < 0 || x >= n || y < 0 || y >= m)
            return false;
        if(vis[x][y] || a[x][y] == '.')
            return false;
        return true;
    };
    
    function<void(int,int)> dfs = [&](int x, int y){
        vis[x][y] = 1;
        for(int i = 0; i < 8; i++){
            if(isValid(x + dir[i][0], y + dir[i][1])){
                dfs(x + dir[i][0], y + dir[i][1]);
            }
        }
    };
    
    int cc = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == 0 && a[i][j] == 'w'){
                dfs(i, j);
                cc++;
            }
        }
    }
    
    cout<<cc;
    return 0;
}