#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    int t = rand(eng) % 7 + 3;
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % 1000 + 1;
        ll a[n];
        for(int i = 0; i < n; i++)
            a[i] = rand(eng) % 1000 + 1;
        cout<<n<<endl;
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        ll ans = 1;
        for(int i = 0; i < n; i++){
            ans = (ans * a[i]) % mod;
        }
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}