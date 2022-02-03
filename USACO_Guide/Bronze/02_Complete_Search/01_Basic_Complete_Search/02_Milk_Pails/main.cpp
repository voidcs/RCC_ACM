#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    int x, y, m;
    cin>>x>>y>>m;
    int ans = 0;
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= 1000; j++){
            int pour = (x*i) + (y*j);
            if(pour <= m){
                ans = max(ans, pour);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
