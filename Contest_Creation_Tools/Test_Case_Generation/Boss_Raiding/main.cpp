#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    freopen("output.txt", "w", stdout);
    vector<ll> sums;
    srand(time(0));
    vector<ll> answers;
    ll t = 5;
    t += rand() % 6;
    t = 1;
    cout<<t<<endl;
    while(t--){
        ll n, x;
        n = rand() % ((ll)1e5)* 1;
        x = rand() % (ll)1e9;
        vector<pair<ll,ll>> a(n);
        cout<<n<<" "<<x<<endl;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            a[i].first = rand() % (ll)1e9;
            a[i].second = rand() % (ll)1e9;
            sum += a[i].first;
        }
        sums.push_back(sum);
        for(int i = 0; i < n; i++){
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }
        cout<<endl;
        sort(a.begin(), a.end());
        ll ans = 0, j = 0;
        ll s = 0;
        for(int i = 0; i < n; i++){
            while(j < n && a[j].first < a[i].first + x){
                s += a[j].second;
                j++;
            }
            ans = max(ans, s);
            s -= a[i].second;
        }
        answers.push_back(ans);
    }
    freopen("answers.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    freopen("sums.txt", "w", stdout);
    for(auto x: sums)
        cout<<x<<endl;
    return 0;
}