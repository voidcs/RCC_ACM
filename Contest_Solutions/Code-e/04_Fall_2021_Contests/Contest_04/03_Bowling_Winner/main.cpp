#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin>>a[i][j];
        
        int ans = 0, best = 0;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < m; j++){
                sum += a[i][j];
            }
            if(sum > best){
                best = sum;
                ans = i+1;
            }
        }
        cout<<ans<<" "<<best<<endl;
    }
    return 0;
}