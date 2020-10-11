#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
    ll n = rand() % (ll)1e4 + 1;
    ll x = rand() % (ll)1e5 + 1;
    ll k = rand() % (ll)1e5 + 1;

    cout<<n<<" "<<x<<" "<<k<<endl;
    ll a[n], b[n];
    ll temp = x;
    for(int i = 0; i < n; i++){
        temp += k;
        a[i] = rand() % temp + 1;
        b[i] = rand() % (ll)1e9 + 1;
    }
    
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    
    for(int i = 0; i < n; i++)
        cout<<b[i]<<" ";
    cout<<endl;
    
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll ans = 0;
    
    ll count = 0;
    for(int i = 0; i < n; i++){
        pq.push(b[i]);
        while(x < a[i]){
            if(!pq.empty()){
                count++;
                x += k;
                ans += pq.top();
                pq.pop();
            }
            else{
                cout<<"-1\n";
                return 0;
            }
        }
    }
    
    freopen("answers.txt", "w", stdout);
    cout<<ans<<endl;

    return 0;
}