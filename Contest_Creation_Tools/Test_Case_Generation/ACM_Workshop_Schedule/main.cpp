#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    freopen("input.txt", "w", stdout);
    int n = rand(eng) % 100 + 3;
    int t = rand(eng) % 1000 + 10;
    cout<<n<<endl;
    vector<array<int, 2>> v(n);
    for(int i = 0; i < n; i++){
        int l = rand(eng) % t + 1;
        int r = rand(eng) % t + 1;
        if(l > r)
            swap(l, r);
        v[i][0] = l, v[i][1] = r;
        cout<<l<<" "<<r<<endl;
    }
    vector<int> vis(1001);
    for(int i = 0; i < n; i++){
        for(int j = v[i][0]; j < v[i][1]; j++)
            vis[j]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = v[i][0]; j < v[i][1]; j++){
            vis[j]--;
        }
        int cnt = 0;
        for(int j = 0; j <= 1000; j++){
            if(vis[j])
                cnt++;
        }
        ans = max(ans, cnt);
        for(int j = v[i][0]; j < v[i][1]; j++){
            vis[j]++;
        }
    }
    freopen("output.txt", "w", stdout);
    cout<<ans<<endl;

    return 0;
}
