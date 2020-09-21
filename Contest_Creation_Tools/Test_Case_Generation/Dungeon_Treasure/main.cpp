#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    srand(time(0));
    freopen("output.txt", "w", stdout);
    
    int t = 5;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    vector<int> answers;
    
    while(t--){
        int n = rand() % 20 + 1;
        int k = rand() % 100 + 1;
        cout<<n<<" "<<k<<endl;
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            int a = rand() % 70 + 1;
            int b = rand() % 100 + 1;
            cout<<a<<" "<<b<<endl;
            v.push_back({a, b});
        }

        int dp[n][k+1];
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
        
        int ans = dp[n-1][k];
        answers.push_back(ans);
    }
    
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}