#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
    srand(time(0));
    freopen("output.txt", "w", stdout);
    
    vector<ll> answers;
    int t;
    t = 15;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    while(t--){
        ll n = rand() % 1000 + 1;
        cout<<n<<endl;
        ll ans = 1;
        for(int i = 2; i <= n; i++){
            ans = (ans * i) % mod;
        }
        answers.push_back(ans);
    }
    
    freopen("answers.txt", "w", stdout);
    for(int i = 0; i < answers.size(); i++){
        cout<<answers[i]<<endl;
    }
    
    return 0;
}