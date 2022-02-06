#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int ans = 0;
        while(x > 0){
            ans += x % 10;
            x /= 10;
        }
        cout<<ans<<endl;
    }
    return 0;
}