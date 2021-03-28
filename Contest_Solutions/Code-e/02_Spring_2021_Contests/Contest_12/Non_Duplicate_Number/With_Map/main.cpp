#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    map<int, int> m;
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin>>a[i];
	    for(int i = 0; i < n; i++){
	        m[a[i]]++;
	    }
	    int ans = 0;
        for(map<int, int>::iterator x = m.begin(); x != m.end(); x++){
            if(x->second == 1)
                ans = x->first;
        }
	    cout<<ans<<endl;
	}
	return 0;
}