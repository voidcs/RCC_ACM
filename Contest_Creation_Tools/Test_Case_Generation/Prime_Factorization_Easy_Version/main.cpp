#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    vector<map<ll, ll>> answers;
    ll t;
    t = 20 + rand()%20;
    cout<<t<<endl;
    while(t--){
        ll n = 1 + rand()%(ll)1e9;
        cout<<n<<endl;
        map<ll, ll> factors;
        for(int i = 2; i*i <= n; i++){
            ll cnt = 0;
            while(n%i == 0){
                n /= i;
                cnt++;
            }
            if(cnt)
                factors[i] = cnt;
        }
        if(n > 1)
            factors[n] = 1;
        answers.push_back(factors);
    }
    freopen("output.txt", "w", stdout);
    for(int i = 0; i < answers.size(); i++){
        for(auto x: answers[i]){
            cout<<x.first<<" "<<x.second<<endl;
        }
        cout<<endl;
    }
    return 0;
}
