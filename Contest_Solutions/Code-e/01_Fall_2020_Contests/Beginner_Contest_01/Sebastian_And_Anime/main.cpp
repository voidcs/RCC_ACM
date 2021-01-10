#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin>>n;
	int a[n];
	int l, r;
	cin>>l>>r;
	l--, r--;
	for(int i = 0; i < n; i++)
	    cin>>a[i];
	    
    int sum = 0;
    for(int i = l; i <= r; i++){
        sum += a[i];
    }
    cout<<sum;
	return 0;
}