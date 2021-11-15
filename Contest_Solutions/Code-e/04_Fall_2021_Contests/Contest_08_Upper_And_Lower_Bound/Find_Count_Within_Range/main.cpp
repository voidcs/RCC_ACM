#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
    sort(v.begin(), v.end());
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        l = upper_bound(v.begin(), v.end(), l-1) - v.begin();
        r = upper_bound(v.begin(), v.end(), r) - v.begin();
        cout<<r - l<<"\n";
    }
    return 0;
}
