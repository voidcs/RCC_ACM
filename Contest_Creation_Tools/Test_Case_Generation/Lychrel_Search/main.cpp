#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPalin(vector<ll> v){
    vector<ll> n = v;
    reverse(n.begin(), n.end());
    return (n == v);
}

int main(){
    vector<pair<ll, ll>> answers;
    freopen("input.txt", "w", stdout);
    srand(time(0));
    int t;
    t = 20 + rand() % 11;
    cout<<t<<endl;
    while(t--){
        ll base, x;
        base = rand() % 255 + 2;
        x = rand() % (ll)1e18;
        cout<<base<<" "<<x<<endl;
        vector<ll> a;
        while(x){
            a.push_back(x%base);
            x /= base;
        }
        
        ll ans = 0;
        while(!isPalin(a)){
            vector<ll> b = a;
            reverse(b.begin(), b.end());
            vector<ll> n;
            int carry = 0;
            for(int i = 0; i < a.size(); i++){
                ll add = a[i] + b[i] + carry;
                if(add >= base){
                    carry = 1;
                    add -= base;
                }
                else
                    carry = 0;
                n.push_back(add);
            }
            
            if(carry)
                n.push_back(1);
            reverse(n.begin(), n.end()); 
            a = n;
            ans++;
            if(ans > 500)
                break;
        }
        if(ans > 500)
            answers.push_back({501, 1});
        else
            answers.push_back({ans, (ll)a.size()});
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers){
        if(x.first <= 500)
            cout<<x.first<<" "<<x.second<<endl;
        else
            cout<<">500\n"; 
    }
    return 0;
}