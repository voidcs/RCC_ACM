#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int n, m, k;
    cin>>n>>m>>k;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>v[i][j];
    for(int i = 0; i < n; i++){
        string s;
        for(int j = 0; j < m; j++){
            s += string(k, v[i][j]);
        }
        for(int j = 0; j < k; j++)
            cout<<s<<endl;
    }
    return 0;
}
