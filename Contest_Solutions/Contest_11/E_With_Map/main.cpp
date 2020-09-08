#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //freopen("input.txt", "r", stdin);
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        map <ll, ll> m;
        for(int i = 0; i < n; i++){
            m[a[i]]++;
        }
        
        bool flag = 0;
        for(int i = 0; i < n; i++){
            m[a[i]]--;
            ll need = x - a[i];
            if(m.count(need)){
                if(m[need] > 0){
                    flag = 1;
                }
            }
            m[a[i]]++;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}