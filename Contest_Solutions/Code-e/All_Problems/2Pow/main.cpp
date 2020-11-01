#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n & (n-1))
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}