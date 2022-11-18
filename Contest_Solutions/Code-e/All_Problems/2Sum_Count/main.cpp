#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> v(n);
        for(int &x: v)
            cin>>x;
        int ans = 0;
        map<int, int> m;
        for(int y: v){
            if(m.count(x - y))
                ans += m[x-y];
            m[y]++;
        }
        cout<<ans<<endl;
    }
}