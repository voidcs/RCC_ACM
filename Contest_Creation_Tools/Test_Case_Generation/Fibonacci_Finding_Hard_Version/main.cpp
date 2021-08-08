#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mat vector<vector<ll>>
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    ll t = rand(eng) % 25 + 25;
    cout<<t<<endl;
    while(t--){
        ll n = rand(eng) % (ll)1e18;
        cout<<n<<endl;
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
            answers.push_back(0);
        else{
            expo_power(n);
            answers.push_back(t[0][1]);
        }
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
}
