#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    
    for(ll i = 2; i*i <= n; i++){
        if(n % i == 0){
            n -= i;
            cout<< (n/2) + 1;
            return 0;
        }
    }
    cout<<1;
    return 0;
}