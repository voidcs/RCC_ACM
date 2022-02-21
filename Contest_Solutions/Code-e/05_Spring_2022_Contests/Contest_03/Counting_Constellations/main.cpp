#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int find(vector<int> &par, int x){
    return (x == par[x]) ? x : par[x] = find(par, par[x]);
}

void unite(vector<int> &par, int x, int y){
    x = find(par, x);
    y = find(par, y);
    if(x != y){
        par[x] = y;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> par(n+1);
        iota(par.begin(), par.end(), 0);
        while(m--){
            int a, b;
            cin>>a>>b;
            unite(par, a, b);
        }
        set<int> ans;
        for(int i = 1; i <= n; i++){
            ans.insert(find(par, i));
        }
        cout<<(int)ans.size()<<endl;
    }
    return 0;
}