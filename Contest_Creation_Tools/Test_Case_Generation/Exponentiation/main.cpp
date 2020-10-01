#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll power(ll base, ll n){
    ll res = 1;
    while(n){
        if(n%2){
            res = (base*res) % mod;
            n--;
        }
        n /= 2;
        base = (base*base) % mod;
    }
    return res;
}

int main(){
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    int t;
    t = 60;
    t += rand() % 40 + 1;
    cout<<t<<endl;
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> distr;
    
    while(t--){
        ll base, pow;
        base = distr(eng) % 50;
        pow = distr(eng) % (ll) 1e10;
        pow++;
        cout<<base<<" "<<pow<<endl;
        answers.push_back(power(base, pow));
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<"\n";
    }
    return 0;
}