#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll total = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            total += a[i];
        }

        ll ans = LLONG_MAX;
        for(int i = 0; i < (1<<n); i++){
            ll sum = 0;
            for(int j = 0; j < n; j++){
                ll f = 1<<j;
                if(i&f){
                    sum += a[j];
                }
                ans = min(ans, abs((total - sum) - sum));
            }
        }
        cout<<ans<<endl;
    
    }
    
    return 0;
}