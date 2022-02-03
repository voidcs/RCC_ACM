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
    for(int i = 0; i < m; i++){
        for(int j = i+1; j < m; j++){
            for(int k = j+1; k < m; k++){
                //Let's first add all of the combinations of the spotty cows
                unordered_set<string> spotty;
                for(int a = 0; a < n; a++){
                    string s;
                    s += v[a][i];
                    s += v[a][j];
                    s += v[a][k];
                    spotty.insert(s);
                }
                //Now we check to see if it exists in any of the non-spotty cows
                bool ok = 1;
                for(int a = n; a < 2*n; a++){
                    string s;
                    s += v[a][i];
                    s += v[a][j];
                    s += v[a][k];
                    if(spotty.count(s))
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
