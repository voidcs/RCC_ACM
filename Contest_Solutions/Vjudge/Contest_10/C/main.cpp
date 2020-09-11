#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        int base;
        string num1, num2;
        cin>>base>>num1>>num2;

        bool flag = 0;
        vector<ll> n1, n2;

        for(int i = 0; i < num1.length(); i++){
            int x;
            if(num1[i] <= '9'){
                x = num1[i] - '0';
            }
            else{
                x = 10;
                x += num1[i] - 'A';
            }
            n1.push_back(x);
        }

        for(int i = 0; i < num2.length(); i++){
            int x;
            if(num2[i] <= '9'){
                x = num2[i] - '0';
            }
            else{
                x = 10;
                x += num2[i] - 'A';
            }
            n2.push_back(x);
        }

        reverse(n1.begin(), n1.end());
        reverse(n2.begin(), n2.end());

        int m = min(n1.size(), n2.size());

        vector<ll> ans;
        int carry = 0;
        for(int i = 0; i < m; i++){
            int add = n1[i] + n2[i] + carry;
            carry = 0;
            if(add >= base){
                carry = add/base;
                add %= base;
            }
            ans.push_back(add);
        }

        int diff = max(n1.size(), n2.size()) - min(n1.size(), n2.size());
        vector<ll> extra;
        if(n1.size() > n2.size())
            extra = n1;
        else
            extra = n2;

        for(int i = m; i < m + diff; i++){
            ans.push_back(extra[i] + carry);
            if(carry)
                carry = 0;
        }
        if(carry)
            ans.push_back(1);

        reverse(ans.begin(), ans.end());
        for(auto x: ans){
            char start = '0';
            if(x >= 10){
                start = 'A';
                x -= 10;
            }
            start += x;
            cout<<start;
        }
        cout<<endl;
    }
    
    
    return 0;
}