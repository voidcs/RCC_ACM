#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int total = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            total += a[i];
        }

        int ans = 1e9;
        for(int i = 0; i < (1<<n); i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                int f = 1<<j;
                if(i&f){
                    sum += a[j];
                }
                ans = min(ans, abs((total - sum) - sum));
            }
        }
        cout<<ans<<endl;
    
    }
    
    return 0;
}