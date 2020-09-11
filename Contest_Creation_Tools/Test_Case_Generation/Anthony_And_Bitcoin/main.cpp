#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n){
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
    srand(time(0));
    vector<string> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;
    ll num;
    ll r = 1e10 - 5;
    while(cases--){
        vector<ll> v;
        int flip = rand() % 2;
        if(flip){
            num = rand() % r;
            num += 2;
            
            while(isPrime(num)){
                num = rand() % r;
                num += 2;
            }
        }
        else{
            num = rand() % r;
            num += 2;
            
            while(!isPrime(num)){
                num = rand() % r;
                num += 2;
            }
        }
        
        cout<<num<<endl;
        if(flip){
            answers.push_back("WAIT\n");
        }
        else
            answers.push_back("BUY\n");
    }

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x;
    }
    
    return 0;
}