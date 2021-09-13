#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        set<int> s;
        bool found = 0;
        for(int i = 0; i < n; i++)
            s.insert(a[i]);
            
        for(int i = 0; i < n; i++){
            int need = x - a[i];
            if(s.count(need))
                found = 1;
            s.insert(a[i]);
        }
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}