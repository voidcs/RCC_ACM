#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    srand(time(0));
    freopen("output.txt", "w", stdout);
    
    ll t = 15;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    vector<ll> answers;
    
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> distr;
    ll a[4] = {25, 10, 5, 1};
    while(t--){
        ll x = distr(eng);
        x %= 1000000000000;
        cout<<x<<endl;
        ll ans = 0;
        for(int i = 0; i < 4; i++){
            ans += x/a[i];
            x %= a[i];
        }
        answers.push_back(ans);
    }
    
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}