#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    int n;
    cin>>n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; i++)
        cin>>x[i];
    for(int i = 0; i < n; i++)
        cin>>y[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            ans = max(ans, (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
        }
    }
    cout<<ans<<endl;
    return 0;
}
