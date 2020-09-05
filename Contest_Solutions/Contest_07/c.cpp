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
        for(int i = 0; i < n; i++)
            cin>>a[i];
        sort(a, a + n);
        
        ll ans = 0;
        ll count = 0;
        
        for(int i = 0; i < n; i++){
            count++;
            if(count == a[i]){
                count = 0;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}