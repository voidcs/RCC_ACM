#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("tracing.in", "r", stdin);
    freopen("tracing.out", "w", stdout);
    int n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<array<int, 3>> v(m);
    for(auto &x: v)
        cin>>x[0]>>x[1]>>x[2];
    sort(v.begin(), v.end());
    //Try each cow as patient zero
    ll ans1 = 0, ans2 = INF, ans3 = 0;
    for(int i = 1; i <= n; i++){
        //Try each k
        bool works = 0;
        for(int k = 0; k <= m+1; k++){
            vector<int> shakes(n+1), vis(n+1);
            string infected(n, '0');
            infected[i-1] = '1';
            vis[i] = 1;
            shakes[i] = k;
            for(auto x: v){
                ll a = x[1];
                ll b = x[2];
                if(vis[a] && vis[b]){
                    shakes[a] = max(shakes[a] - 1, 0);
                    shakes[b] = max(shakes[b] - 1, 0);
                    continue;
                }
                if(!vis[a] && shakes[b]){
                    shakes[b]--;
                    vis[a] = 1;
                    shakes[a] = k;
                    infected[a-1] = '1';
                }
                else if(!vis[b] && shakes[a]){
                    shakes[a]--;
                    vis[b] = 1;
                    shakes[b] = k;
                    infected[b-1] = '1';
                }
            }
            if(infected == s){
                works = 1;
                ans2 = min(ans2, (ll)k);
                ans3 = max(ans3, (ll)k);
            }
        }
        if(works)
            ans1++;
    }
    cout<<ans1<<" "<<ans2<<" ";
    if(ans3 == m+1)
        cout<<"Infinity\n";
    else
        cout<<ans3<<endl;
}
