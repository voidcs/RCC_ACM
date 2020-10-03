#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> primes;

void sieve(){
    ll n = 1e7;
    vector<bool> isPrime(n, 1);
    isPrime[0] = isPrime[1] = 0;
    
    for(int i = 2; i*i <= n; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
    
    for(int i = 2; i <= n; i++){
        if(isPrime[i])
            primes.push_back(i);
    }
}

int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll l, r;
        cin>>l>>r;
        l--, r--;
        ll sum = 0;
        for(int i = l; i <= r; i++){
            sum += primes[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}