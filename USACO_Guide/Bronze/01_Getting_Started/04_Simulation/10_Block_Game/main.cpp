#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ans(26);
    while(n--){
        string a, b;
        cin>>a>>b;
        vector<int> cntA(26), cntB(26);
        for(char c: a)
            cntA[c-'a']++;
        for(char c: b)
            cntB[c-'a']++;
        for(int i = 0; i < 26; i++){
            ans[i] += max(cntA[i], cntB[i]);
        }
    }
    for(int i = 0; i < 26; i++)
        cout<<ans[i]<<endl;
    return 0;
}
