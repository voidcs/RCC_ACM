#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int n, m;
char a[1001][1001];
bool vis[1001][1001];
int dir[8][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};

bool isValid(int x, int y){
    if(x < 1 || x > n || y < 1 || y > m)
        return false;
    if(vis[x][y] || a[x][y] == '.')
        return false;
    return true;
}

void dfs(int x, int y){
    vis[x][y] = 1;
    for(int i = 0; i < 8; i++){
        if(isValid(x + dir[i][0], y + dir[i][1])){
            dfs(x + dir[i][0], y + dir[i][1]);
        }
    }
}

int main(){
    freopen("output.txt", "w", stdout);
    srand(time(0));
    n = 20 + rand() % 31;
    m = 20 + rand() % 31;
    cout<<n<<" "<<m<<endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            cin>>a[i][j];
    }
    
    int cc = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(vis[i][j] == 0 && a[i][j] == 'w'){
                dfs(i, j);
                cc++;
            }
        }
    }
    
    freopen("answers.txt", "w", stdout);
    cout<<cc;
    return 0;
}