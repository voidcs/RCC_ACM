#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        bool found = 0;
        int l = 0, r = n-1;
        while(l < r){
            if(a[l] + a[r] > x)
                r--;
            else if(a[l] + a[r] < x)
                l++;
            else{
                found = 1;
                break;
            }
        }
        
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}