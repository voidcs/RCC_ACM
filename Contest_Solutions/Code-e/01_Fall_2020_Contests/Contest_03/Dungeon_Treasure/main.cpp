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
        vector<pair<ll, ll>> v;
        for(int i = 0; i < n; i++){
            int a, b;
            cin>>a>>b;
            v.push_back({a, b});
        }

        ll dp[n][k+1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= k; j++){
                dp[i][j] = 0;
            }
        }
        
        sort(v.begin(), v.end());
        for(int i = 0; i <= k; i++){
            if(i >= v[0].first){
                dp[0][i] = v[0].second;
            }
        }

        for(int i = 1; i < n; i++){
            for(int j = 0; j <= k; j++){
                if(j < v[i].first){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i].first] + v[i].second);
                }
            }
        }

        cout<<dp[n-1][k]<<endl;

    }
    
    return 0;
}