#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int n, t;
    cin>>n>>t;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
        
    while(t--){
        int x;
        cin>>x;
        int l = 0, r = n-1;
        int ans = -1;
        while(l <= r){
            int m = (l+r)/2;
            if(v[m] <= x){
               l = m+1;
               ans = m;
            }
            else
               r = m-1; 
        }
        cout<<ans+1<<endl;
    }
    
    return 0;
}