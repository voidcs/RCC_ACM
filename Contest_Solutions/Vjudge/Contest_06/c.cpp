#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll n;
        scanf("%lld", &n);
        cout<<( (n-1) / 2) + 1<<endl;
    }
    
    return 0;
}