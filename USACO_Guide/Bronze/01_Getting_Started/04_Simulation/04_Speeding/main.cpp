#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int n, m;
    cin>>n>>m;
    vector<int> road;  //Store speed limit for each mile of the road
    road.push_back(0);
    for(int i = 0; i < n; i++){
        int dist, speedLimit;
        cin>>dist>>speedLimit;
        for(int j = 0; j < dist; j++)
            road.push_back(speedLimit);
    }
    int ans = 0, pos = 0;
    for(int i = 0; i < m; i++){
        int dist, speed;
        cin>>dist>>speed;
        for(int j = 0; j < dist; j++){
            pos++;
            ans = max(ans, speed - road[pos]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
