#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        int x = 0, y = 0;
        cin>>a>>b;
        set<char> s;
        for(char c: a)
            s.insert(c);
        
        bool share = 0;
        for(char c: b)
            if(s.count(c))
                share = 1;
            
        if(share)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}