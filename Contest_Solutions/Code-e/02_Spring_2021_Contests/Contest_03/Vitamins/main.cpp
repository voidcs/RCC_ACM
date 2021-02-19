#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    ll n;
    cin>>n;
    vector<vector<ll>> dp(n+1, vector<ll>(1<<10, INF));
    dp[0][0] = 0;
    for(int i = 0; i < n; i++){
        ll cost;
        string str;
        cin>>cost>>str;
        int mask = 0;
        for(int j = 0; j < 10; j++){
            for(char c: str){
                if(c == 'A' + j)
                    mask |= 1<<j;
            }
        }
        for(int j = 0; j < 1<<10; j++){
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i+1][j|mask] = min(dp[i+1][j|mask], dp[i][j] + cost);
        }
    }
    ll x = (1<<10) - 1;
    if(dp[n][x] == INF)
        cout<<"-1\n";
    else
        cout<<dp[n][x]<<endl;
    
    return 0;
}