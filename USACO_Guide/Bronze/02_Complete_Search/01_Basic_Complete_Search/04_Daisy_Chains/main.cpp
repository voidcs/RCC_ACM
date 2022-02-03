#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;

    int ans = 0;
    for(int l = 0; l < n; l++){
        for(int r = l; r < n; r++){
            int sum = 0;
            for(int i = l; i <= r; i++){
                sum += v[i];
            }
            int p = r - l + 1;
            bool ok = 0;
            for(int i = l; i <= r; i++){
                if(sum % p == 0 && sum % v[i] == 0 && v[i] == sum/p)
                    ok = 1;
            }
            if(ok)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
