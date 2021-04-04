#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("input.txt", "w", stdout);
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    vector<array<int, 2>> answers;
    
    int t = rand(eng) % 5 + 5;
    cout<<t<<endl;
    while(t--){
        map<int, int> m;
        int n = rand(eng) % 40 + 40;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x = rand(eng) % 30 + 1;
            m[x]++;
            v.push_back(x);
        }
        int ans = -1, cnt = 0;
        for(auto x: m){
            if(x.second >= cnt){
                cnt = x.second;
                ans = x.first;
            }
        }
        answers.push_back({ans, cnt});
        random_shuffle(v.begin(), v.end());
        cout<<v.size()<<endl;
        for(int i = 0; i < v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x[0]<<" "<<x[1]<<endl;
    
    return 0;
}