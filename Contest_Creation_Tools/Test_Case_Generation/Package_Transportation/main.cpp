#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> a;

bool isPossible(ll n, ll capacity, ll k){
    ll trips = 1, sum = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > capacity)
            return 0;
        if(sum + a[i] <= capacity)
            sum += a[i];
        else{
            trips++;
            sum = a[i];
        }
    }
    return (trips <= k);
}

int main(){
    vector<ll> answers;
    freopen("output.txt", "w", stdout);
    srand(time(0));
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> distr;
    
    ll t = 5 + rand() % 6;
    t = 10;
    cout<<t<<endl;
    while(t--){
        ll n = 5 + rand() % 26;
        ll k = rand() % (n) + 1;
        a = vector<ll>(n);
        for(int i = 0; i < n; i++){
            a[i] = distr(eng) % (ll)1e10 + 1;
        }

        ll ans = -1;
        ll l = 0, r = 1e15;
        while(l <= r){
            ll mid = (l + r) / 2;
            if(!isPossible(n, mid, k))
                l = mid + 1;
            else{
                ans = mid;
                r = mid - 1;
            }
        }
        cout<<n<<" "<<k<<endl;
        for(int i = 0; i < n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        answers.push_back(ans);
    }
    freopen("answers.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;

	return 0;
}