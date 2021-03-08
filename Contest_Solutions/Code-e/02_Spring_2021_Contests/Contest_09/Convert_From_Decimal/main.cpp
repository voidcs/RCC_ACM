#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int base, n;
	    cin>>base>>n;
	    string ans;
	    while(n > 0){
	        int digit = n % base;
	        if(digit <= 9)
	            ans += '0' + digit;
	        else
	            ans += 'A' + digit - 10;
	        n /= base;
	    }
	    reverse(ans.begin(), ans.end());
	    cout<<ans<<endl;
	}
	return 0;
}