#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    int n;
    cin>>n;
    vector<vector<string>> v(n);
    for(int i = 0; i < n; i++){
        string s;
        int m;
        cin>>s>>m;
        while(m--){
            cin>>s;
            v[i].push_back(s);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        set<string> s;
        for(string x: v[i])
            s.insert(x);
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;
            int featuresInCommon = 0;
            for(string x: v[j]){
                if(s.count(x))
                    featuresInCommon++;
            }
            ans = max(ans, featuresInCommon+1);
        }
    }
    cout<<ans<<endl;
    return 0;
}
s