#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void sieve(vector<int> &primes){
    int n = 1e7;
    //Holds our table for marking non-primes
    vector<bool> isPrime(n+1, 1);
    //Only have to go up to the square root of n
    for(int i = 2; i*i <= n; i++){
        //If we have landed on a prime, mark all of its multiples
        if(isPrime[i]){
            //Start at i*i since everything below it would've been marked by smaller primes already
            for(int j = i*i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
    
    //Anything that was not marked is a prime, add it to our vector
    for(int i = 2; i <= n; i++){
        if(isPrime[i])
            primes.push_back(i);
    }
}

int main(){
    vector<int> primes;
    sieve(primes);
    int t;
    cin>>t;
    while(t--){
        int l, r;
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