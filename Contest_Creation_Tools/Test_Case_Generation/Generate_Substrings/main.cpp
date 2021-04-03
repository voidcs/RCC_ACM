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
    int n = rand(eng) % 5 + 15;
    string s;
    for(int i = 0; i < n; i++){
        s += 'a' + rand(eng)%26;
    }
    cout<<s<<endl;
    vector<string> v;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            string t = s.substr(i, j-i+1);
            v.push_back(t);
        }
    }
    sort(v.begin(), v.end());
    freopen("output.txt", "w", stdout);
    for(string x: v)
        cout<<x<<"\n";
    
    return 0;
}