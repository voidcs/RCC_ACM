#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n;
    cin>>n;
    ll a[n], prefix[n+1];
    ll sum = 0;
    ll l, r;
    cin>>l>>r;
    prefix[0] = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
        prefix[i+1] = sum;
    }

    ll ans = prefix[r] - prefix[l-1];
    cout<<ans;

    return 0;
}