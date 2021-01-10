#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n, x;
	    cin>>n>>x;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin>>a[i];
	    sort(a, a + n);
	    int l = 0, r = n-1;
	    int ans = 0;
	    while(l < r){
	        if(a[l] + a[r] <= x){
	            l++, r--;
	            ans++;
	        }
	        else{
	            r--;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}