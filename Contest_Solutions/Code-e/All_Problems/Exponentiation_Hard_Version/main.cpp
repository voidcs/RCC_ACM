#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = (ll) 1e9 + 7;
using namespace std;

ll power(ll base, ll n){
    ll res = 1;
    while(n){
        if(n%2){
            n--;
            res = (res * base) % mod;
        }
        n /= 2;
        base = (base * base) % mod;
    }
    return res;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n, k;
	    cin>>n>>k;
	    cout<<power(n, k)<<endl;
	}
	return 0;
}