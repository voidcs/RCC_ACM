#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        pair<ll, ll> a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i].first;
            a[i].second = i;
        }
        bool found = 0;
        sort(a, a + n);
        int l = 0, r = n-1;
        while(l < r){
            ll sum = a[l].first + a[r].first;
            if(sum == x){
                found = 1;
                ll ans1 = a[l].second+1, ans2 = a[r].second+1;
                if(ans1 > ans2)
                    swap(ans1, ans2);
                cout<<ans1<<" "<<ans2<<endl;
                break;
            }
            else if(sum < x)
                l++;
            else if(sum > x)
                r--;
        }
        if(!found)
            cout<<"-1\n";
    }
}