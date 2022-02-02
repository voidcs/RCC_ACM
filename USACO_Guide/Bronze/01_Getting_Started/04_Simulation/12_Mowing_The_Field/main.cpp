#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);
    int n;
    cin>>n;
    int x = 0, y = 0;
    int ans = 1e9;
    map<array<int, 2>, int> m;  //Stores the last time we visited cell (x, y)
    int t = 0;
    for(int i = 0; i < n; i++){
        char c;
        int s;
        cin>>c>>s;
        int dx = 0, dy = 0;
        if(c == 'W')
            dx = -1;
        if(c == 'E')
            dx = 1;
        if(c == 'N')
            dy = 1;
        if(c == 'S')
            dy = -1;
        for(int i = 0; i < s; i++){
            t++;
            x += dx, y += dy;
            if(m.count({x, y})){
                ans = min(ans, t - m[{x, y}]);
            }
            m[{x, y}] = t;
        }
    }
    if(ans == 1e9)
        cout<<"-1\n";
    else
        cout<<ans<<endl;
    return 0;
}
