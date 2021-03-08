#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int base;
        cin>>base;
        string x, y;
        cin>>x>>y;
        string ans;
        if(x.length() < y.length())
            swap(x, y);
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        int shorter = min(x.length(), y.length());
        int longer = max(x.length(), y.length());
        int carry = 0;
        for(int i = 0; i < shorter; i++){
            int a, b;
            if(x[i] <= '9')
                a = x[i] - '0';
            else
                a = (x[i] - 'A') + 10;
            if(y[i] <= '9')
                b = y[i] - '0';
            else
                b = (y[i] - 'A') + 10;
            
            int digit = a + b + carry;
            carry = 0;
            if(digit >= base){
                carry = 1;
                digit -= base;
            }
            if(digit <= 9)
                ans += '0' + digit;
            else
                ans += 'A' + (digit - 10);
        }

        for(int i = shorter; i < longer; i++){
            int digit;
            if(x[i] <= '9')
                digit = x[i] - '0';
            else
                digit = x[i] - 'A' + 10;
            digit += carry;
            carry = 0;
            if(digit >= base){
                digit -= base;
                carry = 1;
            }
            if(digit <= 9)
                ans += '0' + digit;
            else
                ans += 'A' + (digit - 10);
        }
        if(carry)
            ans += "1";
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }

    return 0;
}