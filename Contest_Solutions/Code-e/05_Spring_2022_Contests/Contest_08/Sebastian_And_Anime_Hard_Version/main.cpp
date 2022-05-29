#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll &x: v)
        cin>>x;
    vector<vector<ll>> st(20, vector<ll>(n));
    //Base case, fill in answers to segments of length 1
    for(int i = 0; i < n; i++)
        st[0][i] = v[i];
    //Each segment of length 2^i can be filled in constant time using two segments of length 2^(i-1)
    for(int i = 1; i < 20; i++){
        for(int j = 0; j < n; j++){
            if(j + (1<<(i-1)) < n)
                st[i][j] = (st[i-1][j] + st[i-1][j+(1<<(i-1))]) % mod;
        }
    }
    ll t, ans = 0;
    cin>>t;
    while(t--){
        ll a, b;
        cin>>a>>b;
        a--, b--;
        ll i = 30;
        //Answer all power of two segments within b - a
        while(b >= a){
            //Find the biggest power of two that is smaller than the length of the range
            while((1<<i) > b-a+1)
                i--;
            ans = (ans + st[i][b-(1<<i)+1]) % mod;
            //Subtract 2^i from the query segment
            b -= (1<<i);
        }
    }
    cout<<ans<<endl;
    return 0;
}