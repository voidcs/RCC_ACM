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
	    int ans = -1e8;
	    for(int i = 0; i < n; i++){
	        for(int j = i; j < n; j++){
	            int sum = 0;
	            for(int k = i; k <= j; k++){
	                sum += a[k];
	            }
	            ans = max(ans, sum);
	        }
	    }
        cout<<ans<<endl;
        
	}
	return 0;
}