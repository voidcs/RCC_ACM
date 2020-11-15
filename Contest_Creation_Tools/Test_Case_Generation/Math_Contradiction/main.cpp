#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> par;

ll find(ll x){
    return (x == par[x]) ? x : par[x] = find(par[x]);
}

void unite(ll x, ll y){
    x = find(x), y = find(y);
    if(x != y){
        par[x] = y;
    }
}

int main(){
    freopen("input.txt", "w", stdout);
    vector<string> answers;
    srand(time(0));
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t;
    t = 5 + rand() % 6;
    t = 10;
    cout<<t<<endl;
    while(t--){
        vector<pair<ll, ll>> v;
        ll n, k;
        n = rand() % 10000;
        k = rand () % n + 1;
        k *= 2;
        cout<<n<<" "<<k<<endl;
        par = vector<ll> (n+1, 0);
        iota(par.begin(), par.end(), 0);
        
        for(int i = 0; i < k; i++){
            ll x = rand() % n + 1;
            ll y = rand() % n + 1;
            while(y == x){
                y = rand() % n + 1;
            }
            string str;
            int flip = rand()%2;
            if(flip)
                str = "=";
            else
                str = "!=";
            
            cout<<x<<" "<<str<<" "<<y<<endl;
            if(str == "!="){
                v.push_back({x,y});
            }
            else{
                unite(x, y);
            }
        }

        bool flag = 1;
        for(int i = 0; i < v.size(); i++){
            ll x = v[i].first;
            ll y = v[i].second;
            
            if(find(par[x]) == find(par[y]))
                flag = 0;
        }
        if(flag)
            answers.push_back("YES\n");
        else
            answers.push_back("NO\n");
        
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x;
    
    return 0;
}