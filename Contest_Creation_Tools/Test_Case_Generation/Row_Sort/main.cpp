#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    int n = rand(eng) % 15 + 6;
    int m = rand(eng) % 15 + 6;
    cout<<n<<" "<<m<<endl;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            v[i][j] = rand(eng) % 100 + 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++)
        sort(v[i].begin(), v[i].end());
    freopen("output.txt", "w", stdout);
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}