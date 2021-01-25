#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string str;
        cin>>n>>str;
        string s = str;
        reverse(s.begin(), s.end());
        if(s == str)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0; 
}