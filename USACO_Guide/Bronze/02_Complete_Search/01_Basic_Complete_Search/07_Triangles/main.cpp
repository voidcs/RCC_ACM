#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n;
    cin>>n;
    vector<array<int, 2>> v(n);
    for(array<int, 2> &x: v)
        cin>>x[0]>>x[1];

    int ans = 0;
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            for(int c = 0; c < n; c++){
                if(v[a][0] ==v[b][0] && v[b][1] == v[c][1]){
                    ans = max(ans, abs(v[a][1] - v[b][1]) * abs(v[b][0] - v[c][0]));
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
