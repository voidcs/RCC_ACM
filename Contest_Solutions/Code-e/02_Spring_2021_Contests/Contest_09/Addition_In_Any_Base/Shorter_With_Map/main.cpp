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
        //Guarantees that if we have a longer number and have to add the hanging digits, they will be in the x string
        if(x.length() < y.length())
            swap(x, y);
        
        //Reverse by preference so I don't have to iterate from the right to left when adding each column
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        int shorter = min(x.length(), y.length());
        int longer = max(x.length(), y.length());
        int carry = 0;
        
        //Converts all numbers and letters to their decimal value equivalent (I.E. turns C into 12)
        map<char, int> toDecimal;
        //Converts decimal value to corresponding number or letter in other bases (I.E. turns 12 into C)
        map<int, char> toChar;
        
        //Assigning the values in each map
        char c = '0';
        for(int i = 0; i < 36; i++){
            toDecimal[c] = i;
            toChar[i] = c;
            if(c == '9')
                c = 'A';
            else
                c++;
        }
        
        //Add the columns up to the length of the smaller number
        for(int i = 0; i < shorter; i++){
            int a = toDecimal[x[i]];
            int b = toDecimal[y[i]];
            int digit = a + b + carry;
            carry = 0;
            if(digit >= base){
                carry = 1;
                digit -= base;
            }
            ans += toChar[digit];
        }
        
        //Add the remaining digits from the longer number
        for(int i = shorter; i < longer; i++){
            int digit = toDecimal[x[i]] + carry;
            carry = 0;
            if(digit >= base){
                digit -= base;
                carry = 1;
            }
            ans += toChar[digit];
        }
        //Checking if we carried a one at the end
        if(carry)
            ans += "1";
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }

    return 0;
}