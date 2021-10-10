#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll power(ll base, ll n){
    ll res = 1;
    for(int i = 0; i < n; i++){
        res = (res * base) % mod;
    }
    return res;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	    ll n, k;
	    cin>>n>>k;
	    cout<<power(n, k)<<endl;
	}
	return 0;
}