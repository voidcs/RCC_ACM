#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int n;
    cin>>n;
    vector<int> a(n+1), ans(n+1);
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    for(int i = 1; i <= n; i++)
        cin>>ans[i];
    for(int shuffle = 0; shuffle < 3; shuffle++){
        vector<int> newAns(n+1);
        for(int i = 1; i <= n; i++){
            newAns[i] = ans[a[i]];
        }
        ans = newAns;
    }
    for(int i = 1; i <= n; i++)
        cout<<ans[i]<<endl;
    return 0;
}
