#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = 0;
        while(n){
            ll x = n;
            ll y = -1;
            while(x){
                y = max(y, x % 10);
                x /= 10;
            }
            ans++;
            n -= y;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}