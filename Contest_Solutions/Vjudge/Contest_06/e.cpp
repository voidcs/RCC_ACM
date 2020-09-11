#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll a, b;
        cin>>a>>b;
        
        if(a > b)
            swap(a, b);
        
        ll count = 0;
        bool flag = 0;
        while(a != b){
            a *= 2;
            count++;
            if(a > b){
                flag = 1;
                break;
            }
        }
        
        if(flag){
            cout<<"-1\n";
        }
        else{
            ll ans = 0;
            ans += count/3;
            count %= 3;
            
            ans += count/2;
            count %= 2;
            
            ans += count;
            cout<<ans<<endl;
        }
    }
    
    return 0;
}