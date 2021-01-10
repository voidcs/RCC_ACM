#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n;
            cin>>n;
            ll a[2] = {0, 1};
            for(int i = 0; i < n; i++){
                ll temp = a[0] + a[1];
                a[0] = a[1];
                a[1] = temp;
            }
            cout<<a[0]<<endl;
	}
	
	return 0;
}
