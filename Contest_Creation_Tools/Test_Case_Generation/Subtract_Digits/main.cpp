#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    vector<ll> answers;
    freopen("input.txt", "w", stdout);
    srand(time(0));
    ll t = 7 + rand() % 4;
    cout<<t<<endl;
    while(t--){
        ll n;
        n = rand() % 1000000 + 1;
        cout<<n<<endl;
        ll ans = 0;
        while(n){
            ll x = n;
            ll y = -1;
            while(x){
                y = max(y, x % 10);
                x /= 10;
            }
            ans++;
            n -= y;
        }
        answers.push_back(ans);
    }

    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}