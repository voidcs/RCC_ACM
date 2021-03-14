#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        int ans = 1;
        for(int i = 0; i < n; i++){
            ans = (ans * a[i]) % mod;
        }
        cout<<ans<<endl;
    }
}