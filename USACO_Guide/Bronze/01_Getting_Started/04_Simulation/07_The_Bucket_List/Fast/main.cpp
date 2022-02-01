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
    priority_queue<array<int, 3>, vector<array<int, 3>>, greater<array<int, 3>>> pq;
    for(int i = 0; i < n; i++){
        int start, end, buckets;
        cin>>start>>end>>buckets;
        pq.push({start, 0, buckets});
        pq.push({end, 1, buckets});
    }
    int ans = 0, cnt = 0;
    while(pq.size()){
        int finished = pq.top()[1];
        int buckets = pq.top()[2];
        pq.pop();
        if(finished)
            cnt -= buckets;
        else
            cnt += buckets;
        ans = max(ans, cnt);
    }
    cout<<ans<<endl;
    return 0;
}
