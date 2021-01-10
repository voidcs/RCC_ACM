#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    //freopen("input.txt", "r", stdin);
    ll t;
    cin>>t;
    while(t--){
        ll n, x;
        cin>>n>>x;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        sort(a, a + n);
        ll l = 0, r = n-1;
        bool flag = 0;
        while(l < r){
            ll sum = a[l] + a[r];
            if(sum == x){
                flag = 1;
                break;
            }
            
            if(sum > x)
                r--;
            else
                l++;
        }
        
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}