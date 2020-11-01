#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        vector<pair<ll,ll>> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i].first>>a[i].second;
        
        sort(a.begin(), a.end());
        
        ll j = 0, s = 0, ans = 0;
        for(int i = 0; i < n; i++){
            while(j < n && a[j].first < a[i].first + x){
                s += a[j].second;
                j++;
            }
            ans = max(ans, s);
            s -= a[i].second;
        }
        cout<<ans<<endl;
    }

    return 0;
}