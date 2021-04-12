#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int ans = 0, freq = 0;
        for(auto x: m){
            if(x.second >= freq){
                freq = x.second;
                ans = x.first;
            }
        }
        cout<<ans<<" "<<freq<<endl;
    }
    return 0;
}