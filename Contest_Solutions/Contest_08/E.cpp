#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, curr, boost;
    cin>>n>>curr;
    
    ll need[n], cost[n];
    for(int i = 0; i < n; i++)  cin>>need[i];
    cin>>boost;
    for(int i = 0; i < n; i++)  cin>>cost[i];
    
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        pq.push(cost[i]);
        
        if(curr >= need[i])
            continue;
        
        while(curr < need[i]){
            if(pq.empty()){
                cout<<"-1\n";
                return 0;
            }
            curr += boost;
            ans += pq.top();
            pq.pop();
        }
        
    }
    
    cout<<ans<<endl;
    
    return 0;
}