#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        sort(a, a + n);
        bool flag = 1;
        for(int i = 1; i < n; i++){
            if(abs(a[i] - a[i-1]) > 1)
                flag = 0;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}