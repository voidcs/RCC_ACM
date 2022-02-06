#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string x;
        cin>>x;
        int ans = 0;
        for(int i = 0; i < x.length(); i++){
            ans += x[i] - '0';
        }
        cout<<ans<<endl;
    }
    return 0;
}