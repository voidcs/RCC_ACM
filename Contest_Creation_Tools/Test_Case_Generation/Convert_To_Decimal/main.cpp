#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<ll> answers;
    freopen("input.txt", "w", stdout);
    ll t = 5 + rand() % 6;
    cout<<t<<endl;
    while(t--){
        ll x, n;
        x = 2 + rand()%31;
        n = rand() % (ll)1e6;
        answers.push_back(n);
        string str;
        while(n){
            int digit = n%x;
            if(digit < 10)
                str += '0' + digit;
            else
                str += 'A' + (digit-10);
            n /= x;
        }
        reverse(str.begin(), str.end());
        cout<<x<<" "<<str<<endl;
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}