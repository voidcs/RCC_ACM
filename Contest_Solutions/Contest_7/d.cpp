#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    scanf("%lld", &t);
    
    while(t--){
        ll n, s, k;
        scanf("%lld%lld%lld", &n, &s, &k);
        
        set<ll> closed;
        while(k--){
            ll a;
            cin>>a;
            closed.insert(a);
        }
        
        ll ans = 10e10;

        for(int i = s - 1000; i <= s + 1000; i++){
            if(i <= 0 || i > n)
                continue;
            if(!closed.count(i)){
                ans = min(ans, abs(s-i));
            }
        }
        
        printf("%lld\n", ans);
    }
    
    return 0;
}