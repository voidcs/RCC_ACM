#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
            
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(a[i] > a[j])
                    swap(a[i], a[j]);
            }
        }
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
	return 0;
}