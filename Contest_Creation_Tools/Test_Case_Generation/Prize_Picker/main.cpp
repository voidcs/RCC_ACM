#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    vector<ll> answers;
    ll t = rand()%9 + 2;
    t = 1;
    cout<<t<<endl;
    while(t--){
        ll n = rand()%(ll)1e5+2;
        cout<<n<<endl;
        ll a[n];
        for(int i = 0; i < n; i++)
            a[i] = rand()%(ll)1e7+1;
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        sort(a, a + n);
        ll sum = a[n-1] + a[n-2];
        answers.push_back(sum);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}