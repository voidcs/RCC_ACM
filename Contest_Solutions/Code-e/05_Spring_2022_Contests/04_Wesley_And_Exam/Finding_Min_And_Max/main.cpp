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
        
        int high = -1, low = 200;
        for(int i = 0; i < n; i++){
            high = max(high, a[i]);
            low = min(low, a[i]);
        }
        cout<<low<<" "<<high<<endl;
        
    }
    return 0;
}