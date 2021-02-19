#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll a[n];
        set<ll> s;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            s.insert(a[i]);
        }
        bool found = 0;
        for(int i = 0; i < n; i++){
            if(s.count(x - a[i]))
                found = 1;
        }
        
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}