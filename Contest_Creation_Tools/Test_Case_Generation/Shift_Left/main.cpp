#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> distr;
    //ll x = distr(eng) % 10000;
    
    freopen("output.txt", "w", stdout);
    ll t = 10;
    t += rand() % 20;
    cout<<t<<endl;
    vector<ll> answers;
    while(t--){
        ll a = rand() % 51;
        ll b = rand() % 51;
        cout<<a<<" "<<b<<endl;
        answers.push_back(a<<b);
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}