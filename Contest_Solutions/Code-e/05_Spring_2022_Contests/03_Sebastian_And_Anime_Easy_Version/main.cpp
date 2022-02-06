#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    int l, r;
    cin>>l>>r;
    //Zero index these values
    l--, r--;
    
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    int ans = 0;
    for(int i = l; i <= r; i++)
        ans += a[i];
    cout<<ans;

    return 0;
}