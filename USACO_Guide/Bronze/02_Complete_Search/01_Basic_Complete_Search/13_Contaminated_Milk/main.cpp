#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("badmilk.in", "r", stdin);
    freopen("badmilk.out", "w", stdout);
    int n, m, d, s;
    cin>>n>>m>>d>>s;
    vector<array<int, 3>> drink(d);
    vector<array<int, 2>> sick(s);
    for(auto &x: drink)
        cin>>x[0]>>x[1]>>x[2];
    for(auto &x: sick)
        cin>>x[0]>>x[1];
    int ans = 0;
    for(int bad = 1; bad <= m; bad++){
        //Verify that this milk could be bad
        //Check that everyone who is sick drank it before getting sick
        bool ok = 1;
        for(int i = 0; i < s; i++){
            int u = sick[i][0];
            int t = sick[i][1];
            bool drank = 0;
            for(int j = 0; j < d; j++){
                if(drink[j][0] == u && drink[j][1] == bad && drink[j][2] < t){
                    drank = 1;
                }
            }
            if(!drank)
                ok = 0;
        }
        set<int> cnt;
        //If this is a valid milk, count how many people drank it
        if(ok){
            for(auto x: drink){
                if(x[1] == bad)
                    cnt.insert(x[0]);
            }
            ans = max(ans, (int)cnt.size());
        }
    }
    cout<<ans<<endl;
}
