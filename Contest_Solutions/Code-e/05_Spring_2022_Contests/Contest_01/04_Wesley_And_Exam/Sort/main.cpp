#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin>>a[i];
        
        sort(a, a + n);
        int high = -1, low = 200;
        cout<<a[0]<<" "<<a[n-1]<<endl;
        
    }
    return 0;
}