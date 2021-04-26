#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    ll a[4] = {25, 10, 5, 1};
    while(t--){
        ll x;
        cin>>x;
        ll ans = 0;
        for(int i = 0; i < 4; i++){
            ans += x/a[i];
            x %= a[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}