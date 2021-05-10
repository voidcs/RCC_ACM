#include <bits/stdc++.h>
using namespace std;

int main(){
	set<string> s;
	int n;
	cin>>n;
	while(n--){
	    string str;
	    cin>>str;
	    if(s.count(str))
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	   
	   s.insert(str);
	}
	return 0;
}