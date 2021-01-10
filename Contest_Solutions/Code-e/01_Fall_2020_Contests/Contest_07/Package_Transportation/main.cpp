#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a;

bool isPossible(ll n, ll capacity, ll k){
    ll trips = 1, sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > capacity)
            return 0;
        if(sum + a[i] <= capacity)
            sum += a[i];
        else{
            trips++;
            sum = a[i];
        }
    }
    return (trips <= k);
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        a = vector<ll>(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
    
        ll ans = -1;
        ll l = 0, r = 1e15;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(!isPossible(n, mid, k))
                l = mid + 1;
            else{
                ans = mid;
                r = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}