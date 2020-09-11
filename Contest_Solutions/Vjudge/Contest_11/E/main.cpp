#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //freopen("input.txt", "r", stdin);
    ll t;
    cin>>t;
    while(t--){
        ll x, a, b;
        cin>>x>>a>>b;
        ll each = __gcd(a, b);
        each *= 2;
        if(each >= x){
            cout<<"YES\n";
            cout<<each<<endl;
        }
        else
            cout<<"NO\n";
    }
    
    return 0;
}