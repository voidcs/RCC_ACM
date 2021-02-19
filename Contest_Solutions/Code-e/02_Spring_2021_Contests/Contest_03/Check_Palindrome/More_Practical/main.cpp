#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        string str;
        cin>>n>>str;
        bool flag = 1;
        ll half = (n+1)/2;
        for(int i = 0; i < half; i++){
            if(str[i] != str[n-i-1])
            flag = 0;
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    return 0; 
}