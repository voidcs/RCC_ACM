#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans = 1;
        for(int i = 2; i <= n; i++){
            ans = (ans * i) % mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}