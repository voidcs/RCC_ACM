#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    vector<int> prefix;
    prefix.push_back(0);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += v[i];
        prefix.push_back(sum);
    }
    int t;
    cin>>t;
    ll ans = 0;
    while(t--){
        int l, r;
        cin>>l>>r;
        ans = (ans + (prefix[r] - prefix[l-1])) % mod;
    }
    cout<<ans<<endl;
    return 0;
}