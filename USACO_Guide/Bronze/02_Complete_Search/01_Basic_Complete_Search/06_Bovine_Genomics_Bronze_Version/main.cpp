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
        set<char> s;
        for(int j = 0; j < n; j++){
            s.insert(v[j][i]);
        }
        bool ok = 1;
        for(int j = n; j < 2*n; j++){
            if(s.count(v[j][i]))
                ok = 0;
        }
        if(ok)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
