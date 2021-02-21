#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
	    string s;
	    if(i%3 == 0)
	        s += "Fizz";
	    if(i%5 == 0)
	        s += "Buzz";
	    if(s.empty())
	        cout<<i<<endl;
	    else
	        cout<<s<<endl;
	}
	return 0;
}