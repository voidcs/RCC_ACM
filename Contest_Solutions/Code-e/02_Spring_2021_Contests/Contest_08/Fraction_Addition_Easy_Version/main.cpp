#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    
    return gcd(b, a % b);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int numerator[n], denominator[n];
        for(int i = 0; i < n; i++)
            cin>>numerator[i]>>denominator[i];
        
        int m = 1;
        for(int i = 0; i < n; i++)
            m *= denominator[i];
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += (numerator[i] * (m/denominator[i]));
        }
        
        int g = __gcd(ans, m);
        ans /= g;
        m /= g;
        cout<<ans<<"/"<<m<<endl;
        
    }
    return 0;
}