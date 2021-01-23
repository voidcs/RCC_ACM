#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    vector<ll> answers;
    ll t = 100;
    t = rand()%30+1;
    cout<<t<<endl;
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
    for(int i = 0; i < t; i++){
        ll n = rand() % (ll)1e4;
        cout<<n<<endl;
        ll x = (expo_pow(n, 4) - (6*expo_pow(n, 3)) + (23*expo_pow(n, 2)) - (18*n) + 24)/24;
        answers.push_back(x);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}
