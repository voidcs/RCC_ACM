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
        x %= 100000;
        x++;
        cout<<x;
        
        vector<int> v;
        int n = rand() % 20 + 1;
        cout<<" "<<n<<endl;
        set<int> s;
        while(v.size() < n){
            int temp = rand() % 100 + 1;
            if(temp == 1)
                continue;
            if(!s.count(temp)){
                s.insert(temp);
                v.push_back(temp);
            }
        }
        for(auto x: v)
            cout<<x<<" ";
        cout<<endl;
        int INF = 1e8;
        vector<int> dp(x+1, INF);
        dp[0] = 0;
        for(int i = 0; i <= x; i++){
            for(int j = 0; j < n; j++){
                if(v[j] <= i){
                    dp[i] = min(dp[i], dp[i-v[j]] + 1);
                }
            }
        }
        int ans = dp[x];
        if(ans == INF)
            answers.push_back(-1);
        else
            answers.push_back(ans);
    }
    
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}