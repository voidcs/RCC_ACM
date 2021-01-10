#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    ll t;
    t = 5 + rand()%1;
    cout<<t<<endl;
    while(t--){
        ll n, x;
        n = 1 + rand()%(ll)5e4;
        x = 1 + rand()%(ll)1e6;
        cout<<n<<" "<<x<<endl;
        ll a[n];
        for(int i = 0; i < n; i++){
            a[i] = rand()%ll(1e6)+1;
            cout<<a[i]<<" ";
        }
        cout<<endl;
        sort(a, a + n);
        ll ans = 0;
        ll l = 0, r = n-1;
        while(l < r){
            if(a[l] + a[r] <= x){
                ans++;
                l++, r--;
            }
            else
                r--;
        }
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0; 
}