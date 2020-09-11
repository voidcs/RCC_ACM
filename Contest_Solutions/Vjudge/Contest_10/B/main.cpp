#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        ll base;
        cin>>base>>str;

        ll ans = 0;
        ll pow = 1;
        for(int i = str.length() - 1; i >= 0; i--){
            int digit;
            if(str[i] <= '9'){
                digit = str[i] - '0';
            }
            else{
                digit = 10;
                digit += str[i] - 'A';
            }
            ans += digit * pow;
            pow *= base;
        }
        
        cout<<ans<<endl;
    }
    

    return 0;
}