#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    scanf("%lld", &t);
    
    while(t--){
        ll n, x;
        scanf("%lld%lld", &n, &x);
        ll a[n];
        for(int i = 0; i < n; i++)
            scanf("%lld", a+i);
        
        for(int i = 0; i < n; i++)
            a[i] = (x + (a[i]-1)) / a[i];
        
        sort(a, a + n);
        
        ll ans = 0, count = 0;
        
        for(int i = 0; i < n; i++){
            count++;
            if(count == a[i]){
                count = 0;
                ans++;
            }
        }
        printf("%lld\n", ans);
    }
    
    return 0;
}