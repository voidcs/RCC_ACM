#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<ll> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;
    
    ll r = 70;
    while(cases--){
        ll n = rand() % r + 1;
        ll a[2] = {0, 1};
        ll loops = n;
        while(loops--){
            a[0] += a[1];
            swap(a[0], a[1]);
        }
        answers.push_back(a[0]);
        cout<<n<<endl;
    }

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}