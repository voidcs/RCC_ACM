#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main(){
    
    ll n;
    cin>>n;
    ll a[n+1], prefix[n+1];
    ll sum = 0;
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
        prefix[i+1] = sum;
    }
    
    ll t;
    cin>>t;
    ll total = 0;
    while(t--){
        ll l, r;
        cin>>l>>r;
        ll ans = prefix[r] - prefix[l-1];
        total = (total + ans) % mod;
    }
    cout<<total<<endl;
    return 0;
}