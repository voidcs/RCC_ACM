#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y;
    cin>>x>>y;
    int ans = 0, dx = 1, pos = x, last = x;
    while(1){
        pos = x + dx;
        ans += abs(pos - last);
        if(x < y && pos >= y)
            break;
        if(y < x && pos <= y)
            break;
        dx *= -2;
        last = pos;
    }
    ans -= abs(pos-y);
    cout<<ans<<endl;
    return 0;
}
