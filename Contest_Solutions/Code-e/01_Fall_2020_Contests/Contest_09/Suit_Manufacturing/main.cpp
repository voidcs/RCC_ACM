#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
 
int main(){
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    auto valid = [&](ll x, ll k){
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += (x/a[i]);
            if(sum >= k) return true;
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
    cout<<ans<<endl;
    
    return 0;
}