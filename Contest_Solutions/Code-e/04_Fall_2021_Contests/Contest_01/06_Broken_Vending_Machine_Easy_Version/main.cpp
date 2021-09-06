#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        bool found = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(a[i] + a[j] == x)
                    found = 1;
            }
        }
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}