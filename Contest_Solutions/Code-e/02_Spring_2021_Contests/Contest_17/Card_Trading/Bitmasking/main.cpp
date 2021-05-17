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
        
        for(int i = 0; i < a.length(); i++)
            x |= 1 << (a[i] - 'a');
        for(int i = 0; i < b.length(); i++)
            y |= 1 << (b[i] - 'a');
            
        if(x & y)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}