#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> par;
vector<ll> cnt;

ll find(ll x){
    return (x == par[x]) ? x: par[x] = find(par[x]);
}

void unite(ll x, ll y){
    x = find(x), y = find(y);
    if(x != y){
        par[x] = y;
        cnt[y] += cnt[x];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    
    while(t--){
        ll n;
        cin>>n;
        par = vector<ll> (n+1, 0);
        iota(par.begin(), par.end(), 0);
        cnt = vector<ll> (n+1, 1);
        
        ll a[n+1];
        for(int i = 1; i <= n; i++)
            cin>>a[i];
        
        for(int i = 1; i <= n; i++){
            unite(i, a[i]);
        }
        
        for(int i = 1; i <= n; i++){
            cout<<cnt[find(i)]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}