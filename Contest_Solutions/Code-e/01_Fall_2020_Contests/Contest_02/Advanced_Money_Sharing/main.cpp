#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    
    while(t--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        ll sum = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        sort(a, a + n);
        reverse(a, a + n);
        ll ans = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            if(sum / (i+1) >= k)
                ans = max(ans, (ll)i+1);
        }
        
        cout<<ans<<endl;
    }
    return 0;
}