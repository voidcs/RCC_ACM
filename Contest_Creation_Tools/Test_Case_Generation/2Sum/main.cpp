#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    vector<pair<ll, ll>> answers;
    freopen("output.txt", "w", stdout);
    srand(time(0));
    ll t = 10;
    cout<<t<<endl;
    while(t--){
        ll n, x;
        n = rand() % (ll)1e4;
        x = rand() % (ll)1e5;
        cout<<n<<" "<<x<<endl;
        int flip = rand() % 2;
        ll a[n];
        set<ll> s;
        for(int i = 0; i < n; i++){
            ll y = rand() % (ll)1e9;
            while(s.count(x-y)){
                y = rand() % (ll)1e9;
            }
            a[i] = y;
            s.insert(a[i]);
        }
        if(flip){
            a[0] = rand() % x;
            a[1] = x - a[0];
        }
        random_shuffle(a, a + n);
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        
        map<ll, ll> m;
        for(int i = 0; i < n; i++){
            m[a[i]] = i+1;
        }
        
        bool flag = 0;
        for(int i = 0; i < n; i++){
            ll need = x-a[i];
            if(m.count(need) && m[need] != i+1){
                ll ans1 = m[need], ans2 = i+1;
                if(ans1 > ans2)
                    swap(ans1, ans2);
                answers.push_back({ans1, ans2});
                flag = 1;
                break;
            }
        }
        if(!flag)
            answers.push_back({-1, -1});
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        if(x.first == -1)
            cout<<"-1\n";
        else
            cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}