#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n;
        cin>>n;
        ll a[n+1];
        a[0] = 0, a[1] = 1;
        for(int i = 2; i <= n; i++)
            a[i] = a[i-1]+a[i-2];
        cout<<a[n]<<endl;
	}
	
	return 0;
}
