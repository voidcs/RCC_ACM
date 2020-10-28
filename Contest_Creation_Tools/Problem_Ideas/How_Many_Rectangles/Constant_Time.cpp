#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//VIDEO FOR IDEA
//https://www.youtube.com/watch?v=Uq9OXC0Gzgw&list=LL&index=1&t=38s

int main(){
    ll n, m;
    cin>>n>>m;
    
    ll x = (n*(n+1)) / 2;
    ll y = (m*(m+1)) / 2;
    ll ans = x * y;
    cout<<ans<<endl;
    
    return 0;
}