#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
 
int main(){
    srand(time(0));
    freopen("output.txt", "w", stdout);
    vector<ll> answers;
    ll n, k;
    n = rand() % (ll)1e4;
    n *= 5;
    k = rand() % (ll)1e9;
    cout<<n<<" "<<k<<endl;
    ll a[n];
    for(int i = 0; i < n; i++)
        a[i] = rand() % (ll)1e9 + 1;
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    
    auto valid = [&](ll x, ll k){
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += min(x/a[i], (ll)1e9);
        }
        return (sum >= k);
    };
    
    ll ans = INF;
    ll l = 0, r = INF;
    while(l <= r){
        ll mid = (l+r)/2;
        if(valid(mid, k)){
            r = mid-1;
            ans = mid;
        }
        else{
            l = mid+1;
        }
    }
    
    freopen("answers.txt", "w", stdout);
    cout<<ans<<endl;
    
    return 0;
}