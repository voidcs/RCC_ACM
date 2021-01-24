#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    ll t;
    cin>>t;
    function<ll(ll, ll)> expo_pow = [&](ll base, ll pow){
        ll ans = 1;
        while(pow){
            if(pow%2){
                ans *= base;
            }
            base *= base;
            pow /= 2;
        }
        return ans;
    };
    while(t--){
        ll n;
        cin>>n;
        ll x = (expo_pow(n, 4) - (6*expo_pow(n, 3)) + (23*expo_pow(n, 2)) - (18*n) + 24)/24;
        cout<<x<<endl;
    }
    
    return 0;
}
