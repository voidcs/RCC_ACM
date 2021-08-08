#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;
#define mat vector<vector<ll>>

int main(){
    int t;
    cin>>t;
    while(t--){
        ll a, b, c, n;
        cin>>a>>b>>c>>n;
        mat v(4, vector<ll>(4, 0));
        v = {
            {a, b, 0, c},
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 1, 2, 1}
        };
        function<mat(mat, mat)> mult = [&](mat a, mat b){
            mat res(4, vector<ll>(4, 0));
            for(int i = 0; i < 4; i++){
                for(int k = 0; k < 4; k++){
                    for(int j = 0; j < 4; j++){
                        res[i][j] += (a[i][k] * b[k][j]);
                        res[i][j] %= mod;
                    }
                }
            }
            return res;
        };

        function<void(ll)> expo_power = [&](ll power){
            mat res(4, vector<ll>(4, 0));
            for(int i = 0; i < 4; i++)
                res[i][i] = 1;
            while(power){
                if(power%2)
                    res = mult(v, res);
                v = mult(v, v);
                power /= 2;
            }
            v = res;
        };
        if(n == 0)
            cout<<"1\n";
        else{
            expo_power(n);
            ll ans = 0;
            for(int i = 0; i < 4; i++)
                ans += v[0][i];
            ans %= mod;
            cout<<ans<<endl;
        }
    }
    return 0;
}