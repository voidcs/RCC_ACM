#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //freopen("input.txt", "r", stdin);
    ll t;
    cin>>t;
    while(t--){
        ll x, a, b;
        cin>>x>>a>>b;
        vector<int> sarah, isabel;
        for(int i = 1; i <= a; i++){
            if(a%i == 0)
                sarah.push_back(i);
        }
        
        for(int i = 1; i <= b; i++){
            if(b%i == 0)
                isabel.push_back(i);
        }
        
        set<int> s;
        for(int i = 0; i < sarah.size(); i++)
            s.insert(sarah[i]);
        
        sort(isabel.begin(), isabel.end());
        int ans = 1;
        for(int i = 0; i < isabel.size(); i++){
            if(s.count(isabel[i])){
                ans = isabel[i];
            }
        }
        ans *= 2;
        if(ans >= x){
            cout<<"YES\n";
            cout<<ans<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}