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
        set<ll> sums;
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                sums.insert(a[i] + a[j]);
            }
        }

        ll ans = 0;
        for(auto x: sums){
            ll goal = x;

            ll l = 0, r = n - 1;
            ll count = 0;

            while(l < r){
                if(a[l] + a[r] > goal){
                    r--;
                }
                else if(a[l] + a[r] < goal)
                    l++;
                else{
                    count++;
                    l++;
                    r--;
                }
            }
            ans = max(ans, count);
        }
        cout<<ans<<endl;
    }
    return 0;
}