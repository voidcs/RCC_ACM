#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(m, vector<int>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>v[j][i];
    
    for(int i = 0; i < m; i++)
        sort(v[i].begin(), v[i].end());
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cout<<v[j][i]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}