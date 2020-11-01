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
        map<ll, ll> m;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            m[a[i]] = i+1;
        }
        
        bool flag = 0;
        for(int i = 0; i < n; i++){
            int need = x-a[i];
            if(m.count(need) && m[need] != i+1){
                ll a1 = m[need], a2 = i+1;
                if(a2 < a1)
                    swap(a1, a2);
                cout<<a1<<" "<<a2<<endl;
                flag = 1;
                break;
            }
        }
        if(!flag)
            cout<<"-1\n";
    }
}