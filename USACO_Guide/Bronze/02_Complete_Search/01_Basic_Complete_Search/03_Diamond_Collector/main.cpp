#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int cnt = 1;
        for(int j = 0; j < n; j++){
            if(i != j && v[j] >= v[i] && v[j] - v[i] <= k)
                cnt++;
        }
        ans = max(ans, cnt);
    }
    cout<<ans<<endl;
    return 0;
}
