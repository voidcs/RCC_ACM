#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    vector<vector<int>> answers;
    int t = rand(eng) % 15 + 5;
    freopen("input.txt", "w", stdout);
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % (int)1e2 + (int)1e2;
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(rand(eng)%(int)1e2 + 1e2);
        }
        n = s.size();
        vector<int> v;
        for(int x: s)
            v.push_back(x);
        cout<<n<<endl;
        random_shuffle(v.begin(), v.end());
        for(int x: v)
            cout<<x<<" ";
        cout<<endl;
        vector<int> ans(n);
        vector<array<int, 2>> t;
        for(int i = 0; i < n; i++){
            t.push_back({v[i], i});
        }
        sort(t.begin(), t.end());
        for(int i = 0; i < n; i++){
            ans[t[i][1]] = i+1;
        }
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto y: answers){
        for(int x: y)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}