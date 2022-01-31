#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = (b-a) + (d-c);
    ans -= max(0, min(b, d) - max(a, c));
    cout<<ans<<endl;
    return 0;
}
