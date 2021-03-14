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
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        int ans = 1;
        for(int i = 0; i < n; i++){
            //If you are using integers, you still have to cast the multiplication to a temporary long long to avoid overflow
            ans = (ans * 1LL * a[i]) % mod;
        }
        cout<<ans<<endl;
    }
}