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
    srand(time(0));
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    
    sieve();
    int t = 15;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    while(t--){
        ll n = primes.size();
        ll l = rand() % primes.size();
        ll r = rand() % primes.size();
        if(l >= r)
            swap(l, r);
        cout<<l+1<<" "<<r+1<<endl;
        
        ll sum = 0;
        for(int i = l; i <= r; i++){
            sum += primes[i];
        }
        answers.push_back(sum);
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
//    for(int i = 0; i < 10; i++)
//        cout<<primes[i]<<" ";
//    cout<<endl;
//    cout<<primes.size()<<endl;
    return 0;
}