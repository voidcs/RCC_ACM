#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin>>a[i];
	    int ans = -1e8, sum = 0;
	    for(int i = 0; i < n; i++){
	        sum = max(sum+a[i], a[i]);
	        ans = max(ans, sum);
	    }
        cout<<ans<<endl;
        
	}
	return 0;
}