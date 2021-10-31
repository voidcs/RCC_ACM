#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

bool valid(ll x, ll k, ll a[], ll n){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += (x/a[i]);
        if(sum >= k)
            return true;
    }
    if(sum >= k)
        return true;
    else
        return false;
}

int main(){
    ll n, k;
    cin>>n>>k;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    ll ans = INF;
    ll l = 0, r = INF;
    while(l <= r){
        ll mid = (l+r)/2;
        if(valid(mid, k, a, n)){
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