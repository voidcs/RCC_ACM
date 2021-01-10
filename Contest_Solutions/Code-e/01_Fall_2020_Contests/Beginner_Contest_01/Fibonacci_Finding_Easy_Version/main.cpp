#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[2] = {0, 1};
	    while(n > 0){
	        a[0] += a[1];
	        swap(a[0], a[1]);
	        n--;
	    }
	    cout<<a[0]<<endl;
	    
	}
	return 0;
}