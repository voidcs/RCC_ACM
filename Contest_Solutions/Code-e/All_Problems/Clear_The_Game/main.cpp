#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n, x, k;
    cin>>n>>x>>k;
    ll a[n], b[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    for(int i = 0; i < n; i++)
        cin>>b[i];
    
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll ans = 0;
    
    for(int i = 0; i < n; i++){
        pq.push(b[i]);
        while(x < a[i]){
            if(!pq.empty()){
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
    
    cout<<ans<<endl;
    
    return 0;
}