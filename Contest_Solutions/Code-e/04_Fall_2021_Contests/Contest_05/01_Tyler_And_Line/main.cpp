#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ans = 1;
        for(int i = 2; i <= n; i++){
            ans = (ans * i) % mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}