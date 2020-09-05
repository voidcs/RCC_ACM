#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x;
        ll base;
        cin>>base>>x;
        
        vector<char> v;

        while(x){
            ll add = 0;
            char start = '0';

            int r = x%base;
            if(r > 9){
                start = 'A';
                r -= 10;
            }
            v.push_back(start + r);
            x /= base;
        }

        reverse(v.begin(), v.end());

        for(auto x: v)
            cout<<x;
        cout<<endl;
    }
    

    return 0;
}