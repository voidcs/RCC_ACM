#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> v(n);
        for(int i = 0; i < n; i++)
            cin>>v[i];
        string ans;
        for(int i = 0; i < n; i++){
            int shorter = min(ans.length(), v[i].length());
            int longer = max(ans.length(), v[i].length());
            //Make v[i] the longer number so we know that all potential extra digits will be in v[i]
            if(ans.length() > v[i].length())
                swap(ans, v[i]);
            reverse(ans.begin(), ans.end());
            reverse(v[i].begin(), v[i].end());
            
            int carry = 0;
            string newAns;
            //First iterate through the length they have in common
            for(int j = 0; j < shorter; j++){
                int digit = (ans[j] - '0') + (v[i][j] - '0') + carry;
                carry = 0;
                if(digit > 9){
                    carry = 1;
                    digit -= 10;
                }
                newAns += '0' + digit;
            }
            //Now add all the remaining numbers from the longer number
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
        cout<<ans<<endl;
    }
    
    return 0;
}