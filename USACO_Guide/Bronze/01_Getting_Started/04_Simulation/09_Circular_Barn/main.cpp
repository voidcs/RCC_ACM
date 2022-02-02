#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
    int ans = 1e9;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += v[j] * ((j-i+n)%n);
        }
        ans = min(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}
