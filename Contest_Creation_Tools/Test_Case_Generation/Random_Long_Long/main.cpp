#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> distr;
    ll x = distr(eng) % 10000;
    
    return 0;
}