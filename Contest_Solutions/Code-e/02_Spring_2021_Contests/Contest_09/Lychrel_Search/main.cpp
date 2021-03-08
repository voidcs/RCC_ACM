#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll base, x;
        cin>>base>>x;
        vector<ll> a;
        while(x){
            a.push_back(x % base);
            x /= base;
        }
      
        function<bool(vector<ll>)> isPalin = [&](vector<ll> v){
            vector<ll> r = v;
            reverse(r.begin(), r.end());
            return (r == v);
        };  
        
        ll ans = 0;
        while(!isPalin(a)){
            vector<ll> b = a;
            reverse(b.begin(), b.end());
            vector<ll> n;
            int carry = 0;
            for(int i = 0; i < a.size(); i++){
                ll add = a[i] + b[i] + carry;
                if(add >= base){
                    carry = 1;
                    add -= base;
                }
                else
                    carry = 0;
                n.push_back(add);
            }
            
            if(carry)
                n.push_back(1);
            reverse(n.begin(), n.end()); 
            a = n;
            ans++;
            if(ans > 500)
                break;
        }
        if(ans > 500)
            cout<<">500\n";
        else
            cout<<ans<<" "<<a.size()<<endl;
    }
    return 0;
}