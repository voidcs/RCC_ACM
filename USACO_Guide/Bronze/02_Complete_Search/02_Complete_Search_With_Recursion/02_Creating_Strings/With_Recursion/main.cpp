#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    map<char, int> m;
    for(char c: s)
        m[c]++;
    set<string> ans;
    function<void(string)> gen = [&](string t){
        if(t.length() == n){
            ans.insert(t);
        }
        for(char c = 'a'; c <= 'z'; c++){
            if(m[c] > 0){
                m[c]--;
                gen(t + c);
                m[c]++;
            }
        }
    };
    gen("");
    cout<<ans.size()<<endl;
    for(auto x: ans)
        cout<<x<<endl;
    return 0;
}
