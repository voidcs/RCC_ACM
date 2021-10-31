#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l = 1, r = 1e4;
        int ans = -1;
        while(l <= r){
            int m = (l+r)/2;
            if(m*m <= n){
                ans = m;
                l = m + 1;
            }
            else{
                r = m - 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}