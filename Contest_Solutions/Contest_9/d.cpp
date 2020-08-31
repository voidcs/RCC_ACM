#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n], b[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        for(int i = 0; i < n; i++)
            cin>>b[i];

        ll lowA = 10e10, lowB = 10e10;
        for(int i = 0; i < n; i++){
            lowA = min(lowA, a[i]);
            lowB = min(lowB, b[i]);
        }
        
        ll ans = 0;

        for(int i = 0; i < n; i++){
            ll subA = a[i] - lowA;
            ll subB = b[i] - lowB;
            
            ll m = min(subA, subB);

            ans += m;
            subA -= m;
            subB -= m;
            
            ans += subA + subB;
        }
        cout<<ans<<endl;
            
    }
    return 0;
}