#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    int n, b;
    cin>>n>>b;
    vector<array<int, 2>> v(n);
    for(array<int, 2> &x: v)
        cin>>x[0]>>x[1];

    int ans = 1e9;
    array<int, 2> dir[4] = {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            for(int d = 0; d < 4; d++){
                int x = v[a][0] + dir[d][0];
                int y = v[b][1] + dir[d][1];
                vector<int> quad(5);
                for(int i = 0; i < n; i++){
                    if(v[i][0] > x && v[i][1] > y)
                        quad[1]++;
                    else if(v[i][0] < x && v[i][1] > y)
                        quad[2]++;
                    else if(v[i][0] < x && v[i][1] < y)
                        quad[3]++;
                    else if(v[i][0] > x && v[i][1] < y)
                        quad[4]++;
                }
                int M = 0;
                for(int i = 1; i <= 4; i++)
                    M = max(M, quad[i]);
                ans = min(ans, M);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
