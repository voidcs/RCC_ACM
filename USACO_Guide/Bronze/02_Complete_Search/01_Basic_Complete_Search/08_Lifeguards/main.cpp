#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    int n;
    cin>>n;
    vector<array<int, 2>> v(n);
    vector<int> vis(1001);
    for(array<int, 2> &x: v){
        cin>>x[0]>>x[1];
        for(int i = x[0]; i < x[1]; i++)
            vis[i]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        int covered = 0;
        for(int j = v[i][0]; j < v[i][1]; j++)
            vis[j]--;
        for(int j = 0; j <= 1000; j++){
            if(vis[j])
                covered++;
        }
        for(int j = v[i][0]; j < v[i][1]; j++)
            vis[j]++;
        ans = max(ans, covered);
    }
    cout<<ans<<endl;
    return 0;
}
