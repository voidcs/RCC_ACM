#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin>>a[i];
	    int low = 200, high = -1;
	    for(int i = 0; i < n; i++){
	        low = min(low, a[i]);
	        high = max(high, a[i]);
	    }
	    cout<<low<<" "<<high<<endl;
	}
	return 0;
}