#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
//    freopen("input.txt", "r" ,stdin);
//    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vector<pair<int, int>> v;
        int weight[n], value[n];
        for(int i = 0; i < n; i++){
            cin>>weight[i]>>value[i];
        }

        vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
        for(int i = 0; i <= k; i++){
            if(i >= weight[0])
                dp[0][i] = value[0];
        }

        for(int i = 1; i < n; i++){
            for(int j = 0; j <= k; j++){
                if(j < weight[i])
                    dp[i][j] = dp[i-1][j];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
            }
        }

        cout<<dp[n-1][k]<<endl;

    }
    
    return 0;
}