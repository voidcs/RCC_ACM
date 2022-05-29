#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
    vector<vector<int>> st(30, vector<int>(n));
    for(int i = 0; i < n; i++){
        st[0][i] = v[i];
    }
    for(int j = 1; j < 30; j++){
        for(int i = 0; i < n; i++){
            if(i + (1<<j) <= n){
                st[j][i] = __gcd(st[j-1][i], st[j-1][i + (1<<(j-1))]);
            }
        }
    }
    while(q--){
        int a, b;
        cin>>a>>b;
        a--, b--;
        int i = log2(b-a+1);
        int ans = __gcd(st[i][a], st[i][b-(1<<i)+1]);
        cout<<ans<<endl;
    }
    return 0;
}