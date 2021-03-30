#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n;
	    int ans = 0;
	    for(int i = 0; i < n; i++){
	        cin>>x;
	        ans ^= x;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}