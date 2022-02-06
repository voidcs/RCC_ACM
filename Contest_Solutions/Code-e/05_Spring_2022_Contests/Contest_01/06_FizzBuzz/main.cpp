#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
	    string ans;
	    if(i%3 == 0)
	        ans += "Fizz";
	    if(i%5 == 0)
	        ans += "Buzz";
	    if(ans.empty())
	        cout<<i<<endl;
	    else
	        cout<<ans<<endl;
	}
	return 0;
}