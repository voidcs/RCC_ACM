#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    cin>>n;
    vector<array<int, 3>> v(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin>>v[i][j];
        }
    }
    int ans = 0;
    for(int spot = 1; spot < 4; spot++){
        vector<int> shells(4);
        shells[spot] = 1;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            swap(shells[v[i][0]], shells[v[i][1]]);
            if(shells[v[i][2]])
                cnt++;
        }
        ans = max(ans, cnt);
    }
    cout<<ans<<endl;
    return 0;
}
