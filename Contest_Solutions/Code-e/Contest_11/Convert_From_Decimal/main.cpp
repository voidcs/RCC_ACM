#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int x, n;
	    cin>>x>>n;
	    string ans;
	    while(n){
	        int digit = n % x;
	        if(digit <= 9)
	            ans += '0' + digit;
	        else
	            ans += 'A' + digit - 10;
	        n /= x;
	    }
	    reverse(ans.begin(), ans.end());
	    cout<<ans<<endl;
	}
	return 0;
}