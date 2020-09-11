#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        string str;
        cin>>str;
        string ans;
        int n = str.length();
        ans += str[0];
        for(int i = 1; i < n - 1; i+=2){
            ans += str[i];
        }
        
        ans += str[n-1];
        cout<<ans<<endl;      
    }
    
    return 0;
}