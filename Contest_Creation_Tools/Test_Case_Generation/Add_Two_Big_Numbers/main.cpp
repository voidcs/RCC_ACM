#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    srand(time(0));
    vector<string> answers;
    freopen("input.txt", "w", stdout);
    int t = rand() % 30 + 5;
    cout<<t<<endl;
    while(t--){
        int n = rand() % 100 + 5;
        vector<string> v(n);
        for(int i = 0; i < n; i++){
            int len = rand() % 4 + 1;
            for(int j = 0; j < len; j++){
                v[i] += '0' + rand() % 10;
                if(j == 0){
                    while(v[i][0] == '0')
                        v[i][0] = '0' + rand() % 10;
                }
            }
        }
        cout<<n<<endl;
        for(auto x: v)
            cout<<x<<" ";
        cout<<endl;
        string ans = "0";
//        int check = 0;
//        for(int i = 0; i < n; i++)
//            check += stoi(v[i]);
        for(int i = 0; i < n; i++){
            int shorter = min(ans.length(), v[i].length());
            int longer = max(ans.length(), v[i].length());
            if(ans.length() > v[i].length())
                swap(ans, v[i]);
            reverse(ans.begin(), ans.end());
            reverse(v[i].begin(), v[i].end());
            int carry = 0;
            string newAns;
            for(int j = 0; j < shorter; j++){
                int digit = (ans[j] - '0') + (v[i][j] - '0') + carry;
                carry = 0;
                if(digit > 9){
                    carry = 1;
                    digit -= 10;
                }
                newAns += '0' + digit;
            }
            for(int j = shorter; j < longer; j++){
                int digit = (v[i][j] - '0') + carry;
                carry = 0;
                if(digit > 9){
                    carry = 1;
                    digit -= 10;
                }
                newAns += '0' + digit;
            }
            if(carry)
                newAns += '1';
            reverse(newAns.begin(), newAns.end());
            ans = newAns;
        }
//        if(check != stoi(ans))
//            cout<<"Incorrect calculation\n";
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}