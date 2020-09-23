#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int coins[k];
        for(int i = 0; i < k; i++)
            cin>>coins[i];
        
        int INF = 1e8;
        vector<int> dp(n+1, INF);
        dp[0] = 0;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j < k; j++){
                if(coins[j] <= i){
                    dp[i] = min(dp[i], dp[i - coins[j]] + 1);
                }
            }
        }
        if(dp[n] == INF)
            cout<<"-1\n";
        else
            cout<<dp[n]<<endl;
    }
    return 0;
}