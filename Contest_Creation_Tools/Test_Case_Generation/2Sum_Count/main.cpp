#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    vector<ll> answers;
    int t = rand(eng) % 5 + 10;
    freopen("input.txt", "w", stdout);
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % (int)1e4 + (int)1e4;
        int find = rand(eng) % (int)1e3 + (int)5e2;
        cout<<n<<" "<<find<<endl;
        vector<int> v(n);
        for(int &x: v)
            x = rand(eng) % (int)1e3 + 1;
        for(int x: v)
            cout<<x<<" ";
        cout<<endl;
        map<int, int> m;
        ll ans = 0;
        for(int x: v){
            if(m.count(find-x))
                ans += m[find-x];
            m[x]++;
        }
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}