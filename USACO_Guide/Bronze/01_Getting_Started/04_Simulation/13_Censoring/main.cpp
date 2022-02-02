#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string s, t;
    cin>>s>>t;
    int n = s.length();
    int m = t.length();
    string ans;
    for(int i = 0; i < n; i++){
        ans += s[i];
        if((int)ans.length() >= m && ans.substr((int)ans.length()-m, m) == t){
            ans.resize((int)ans.length() - m);
        }
    }
    cout<<ans<<endl;
    return 0;
}
