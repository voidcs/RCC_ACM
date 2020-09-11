#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int base;
        cin>>base;
        string num1, num2;
        cin>>num1>>num2;
        ll x = 0, y = 0;
        int pow = 1;
        for(int i = num1.length() - 1; i >= 0; i--){
            int digit;
            if(num1[i] <= '9'){
                digit = num1[i] - '0';
            }
            else{
                digit = 10;
                digit += (num1[i] - 'A');
            }
            x += digit * pow;
            pow *= base;
        }
        
        pow = 1;
        for(int i = num2.length()- 1; i >= 0; i--){
            int digit;
            if(num2[i] <= '9'){
                digit = num2[i] - '0';
            }
            else{
                digit = 10;
                digit += (num2[i] - 'A');
            }
            y += digit * pow;
            pow *= base;
        }

        int ans = x + y;
        vector<char> v;
        
        while(ans){
            char start = '0';
            int r = ans % base;
            if(r > 9){
                start = 'A';
                r -= 10;
            }
            v.push_back(start + r);
            ans /= base;
        }
        
        reverse(v.begin(), v.end());
        for(auto x: v)
            cout<<x;
        cout<<endl;
    }
    
    return 0;
}