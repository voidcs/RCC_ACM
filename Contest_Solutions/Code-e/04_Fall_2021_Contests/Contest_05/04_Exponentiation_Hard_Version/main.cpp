#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll power(ll base, ll power){
    ll res = 1;
    while(power > 0){
        //If the power is odd, add the base to the answer and reduce power by one
        if(power%2 == 1){
            power--;
            res = (res * base) % mod;
        }
        //Else if the power is even cut the power in half and square the base
        else if(power%2 == 0){
            power /= 2;
            base = (base * base) % mod;
        }
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