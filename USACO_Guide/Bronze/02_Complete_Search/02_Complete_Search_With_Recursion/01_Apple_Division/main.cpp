#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int n;
    cin>>n;
    vector<ll> v(n);
    ll sum = 0;
    for(ll &x: v){
        cin>>x;
        sum += x;
    }
    ll ans = INF;
    for(int i = 0; i < (1<<n); i++){
        ll left = 0;
        for(int j = 0; j < n; j++){
            if(i & (1<< j))
                left += v[j];
        }
        ll right = sum - left;
        ans = min(ans, abs(right - left));
    }
    cout<<ans<<endl;
    return 0;
}
