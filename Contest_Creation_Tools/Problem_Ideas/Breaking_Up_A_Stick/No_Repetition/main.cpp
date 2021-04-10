#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    ll n;
    cin>>n;
    vector<vector<int>> all;
    function<void(vector<int>, int)> gen = [&](vector<int> v, int r){
        if(r == 0){
            all.push_back(v);
            return;
        }
        int n;
        if(v.empty())
            n = r;
        else
            n = min(v.back(), r);
        for(int i = 1; i <= n; i++){
            vector<int> t = v;
            t.push_back(i);
            gen(t, r-i);
        }
    };
    vector<int> v;
    gen(v, n);
    sort(all.begin(), all.end());
    for(int i = 0; i < all.size(); i++){
        for(int x: all[i])
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}