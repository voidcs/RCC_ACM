#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n;
    cin>>n;
    vector<int> p(1001);
    for(int i = 0; i < n; i++){
        int start, end, buckets;
        cin>>start>>end>>buckets;
        p[start] += buckets;
        p[end] -= buckets;
    }
    int ans = 0, cnt = 0;
    for(int i = 0; i <= 1000; i++){
        cnt += p[i];
        ans = max(ans, cnt);
    }
    cout<<ans<<endl;
    return 0;
}
