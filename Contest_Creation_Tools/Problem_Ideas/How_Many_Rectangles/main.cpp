#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//VIDEO FOR IDEA
//https://www.youtube.com/watch?v=Uq9OXC0Gzgw&list=LL&index=1&t=38s

int main(){
    ll n, m;
    cin>>n>>m;
    
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int k = i; k <= n; k++){
                for(int l = j; l <= m; l++){
                    ans++;
                    //cout<<"SIZE: "<<i<<"x"<<j<<"   on row: "<<k<<" and col: "<<l<<"   ans: "<<ans<<endl;
                }
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;
}