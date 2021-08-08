#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mat vector<vector<ll>>
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        mat t = {
            {0, 1},
            {1, 1}
        };
        function<mat(mat, mat)> mult = [&](mat a, mat b){
            mat res(2, vector<ll>(2));
            for(int i = 0; i < 2; i++){
                for(int k = 0; k < 2; k++){
                    for(int j = 0; j < 2; j++){
                        res[i][j] += (a[i][k] * b[k][j]);
                        res[i][j] %= mod;
                    }
                }
            }
            return res;
        };
        function<void(ll)> expo_power = [&](ll power){
            mat res(2, vector<ll>(2));
            for(int i = 0; i < 2; i++)
                res[i][i] = 1;
            while(power){
                if(power%2)
                    res = mult(t, res);
                t = mult(t, t);
                power /= 2;
            }
            t = res;
        };
        if(n == 0)
            cout<<"0\n";
        else{
            expo_power(n);
            cout<<t[0][1]<<endl;
        }
    }
}
