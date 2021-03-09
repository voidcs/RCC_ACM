#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    srand(time(0));
    vector<string> answers;
    freopen("input.txt", "w", stdout);
    int t = 30 + rand()%10;
    cout<<t<<endl;
    while(t--){
        int base = rand()%35+2;
        cout<<base<<endl;
        string x, y;
        int n = rand()%15+1;
        int m = rand()%15+1;
        for(int i = 0; i < n; i++){
            int d = rand()%base;
            if(d > 9)
                x += 'A' + d-10;
            else
                x += '0' + d;
        }
        for(int i = 0; i < m; i++){
            int d = rand()%base;
            if(d > 9)
                y += 'A' + d-10;
            else
                y += '0' + d;
        }
        if(x[0] == '0'){
            if(base == 2)
                x = '1' + x;
            else
                x[0]++;
        }
        if(y[0] == '0'){
            if(base == 2)
                y = '1' + y;
            else
                y[0]++;
        }
        cout<<x<<" "<<y<<endl;
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
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}