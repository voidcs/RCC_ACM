#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    ll n;
    n = rand() % 10000;
    cout<<n<<endl;
    vector<vector<ll>> dp(n+1, vector<ll>(1<<10, INF));
    dp[0][0] = 0;
    //ll y = 1;
    for(int i = 0; i < n; i++){
        ll cost = rand() % 10000 + 1;
        //cost = y;
        //y *= 10;
        string str;
        ll len = rand() % 10 + 1;
        vector<int> v(10);
        iota(v.begin(), v.end(), 0);
        random_shuffle(v.begin(), v.end());
        for(int j = 0; j < len; j++)
            str += 'A' + v[j];
        if(str.length() == 10)
            cost *= 100;
        cout<<cost<<" "<<str<<endl;
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
    freopen("output.txt", "w", stdout);
    ll x = (1<<10) - 1;
    if(dp[n][x] == INF)
        cout<<"-1\n";
    else
        cout<<dp[n][x]<<endl;
    
    return 0;
}