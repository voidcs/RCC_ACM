#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mat vector<vector<ll>>
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n+1);
        v[0] = 0, v[1] = 1;
        for(int i = 2; i <= n; i++){
            v[i] = v[i-1] + v[i-2];
        }
        cout<<v[n]<<endl;
    }
}
