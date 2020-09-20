#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    
    return gcd(b, a % b);
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        vector<ll> output;
        int n;
        cin>>n;
        map<int, int> factors;
        vector<ll> numerator(n), denom(n);
        for(int i = 0; i < n; i++){
            cin>>numerator[i]>>denom[i];
        }
        for(int i = 0; i < n; i++){
            ll x = denom[i];
            for(int i = 2; i*i <= x; i++){
                int count = 0;
                if(x % i == 0){
                    while(x % i == 0){
                        count++;
                        x /= i;
                    }
                }
                if(count > 0)
                    factors[i] = max(factors[i], count);
            }
            if(x > 1){
                factors[x] = max(factors[x], 1);
            }
        }
        ll LCM = 1;
        for(auto x: factors){
            LCM *= pow(x.first, x.second);
        }
        ll ans = 0;
        for(int i = 0; i < n; i++){
            ll x = numerator[i] * (LCM / denom[i]);
            ans += x;
            output.push_back(x);
        }
        for(int i = 0; i < output.size(); i++){
            cout<<output[i]<<"/"<<LCM;
            if(i != output.size() - 1)
                cout<<" + ";
            else
                cout<<" = ";
        }
        ll g = __gcd(ans, LCM);
        ans /= g;
        LCM /= g;
        cout<<ans<<"/"<<LCM<<endl;
    }
    return 0;
}