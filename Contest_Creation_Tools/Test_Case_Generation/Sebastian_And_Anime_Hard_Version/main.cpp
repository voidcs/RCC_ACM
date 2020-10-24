#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main(){
    
    vector<ll> answers;
    srand(time(0));
    freopen("output.txt", "w", stdout);
    ll n = rand() % (ll)1e5;
    cout<<n<<endl;
    ll a[n], prefix[n];
    ll sum = 0;
    for(int i = 0; i < n; i++){
        a[i] = rand() % (ll)1e4;
        cout<<a[i]<<" ";
        sum += a[i];
        prefix[i] = sum;
    }
    
    cout<<endl;
    ll t = (ll)1e4;
    cout<<t<<endl; 
    ll f = 0;
    while(t--){
        ll l = rand() % n;
        ll r = rand() % n;
        l = 0;
        r = n-1;
        if(r < l)
            swap(l, r);
        cout<<l+1<<" "<<r+1<<endl;
        if(!l){
            answers.push_back(prefix[r]);
            continue;
        }
        ll ans = prefix[r] - prefix[l-1];
        answers.push_back(ans);
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers)
        f = (f + x) % mod;
    cout<<f<<endl;

    return 0;
}