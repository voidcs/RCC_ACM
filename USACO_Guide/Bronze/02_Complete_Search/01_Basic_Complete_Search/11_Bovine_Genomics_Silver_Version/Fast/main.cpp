#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int n, m;
    cin>>n>>m;
    vector<vector<char>> v(2*n, vector<char>(m));
    for(int i = 0; i < 2*n; i++)
        for(int j = 0; j < m; j++)
            cin>>v[i][j];

    int ans = 0;
    map<char, int> id;
    id['A'] = 0;
    id['C'] = 1;
    id['G'] = 2;
    id['T'] = 3;
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            for(int k = j+1; k < m; k++){
                //Let's first add all of the combinations of the spotty cows
                vector<int> vis(64);
                unordered_set<string> spotty;
                for(int a = 0; a < n; a++){
                    int u = (16 * id[v[a][i]]) + (4 * id[v[a][j]]) + (id[v[a][k]]);
                    vis[u] = 1;
                }
                //Now we check to see if it exists in any of the non-spotty cows
                bool ok = 1;
                for(int a = n; a < 2*n; a++){
                    int u = (16 * id[v[a][i]]) + (4 * id[v[a][j]]) + (id[v[a][k]]);
                    if(vis[u])
                        ok = 0;
                }
                if(ok)
                    ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
