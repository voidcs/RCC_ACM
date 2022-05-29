#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int n, q;
    cin>>n>>q;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
    //pow2 is the biggest value of n such that 2^n <= n
    int pow2 = 0;
    while((1LL << pow2) < n)
        pow2++;
        
    vector<vector<int>> st(pow2, vector<int>(n));
    //First row of the sparse table is just the array itself
    for(int i = 0; i < n; i++){
        st[0][i] = v[i];
    }
    
    
    //First each length segment greater than 1, we take two segments of the power of two below it
    for(int j = 1; j < pow2; j++){
        for(int i = 0; i < n; i++){
            //Bounds checking
            if(i + (1<<j) <= n){
                st[j][i] = min(st[j-1][i], st[j-1][i + (1<<(j-1))]);    //The left segment is st[j-1][i], the right segment is st[j-1][[i+(1<<(j-1))]
            }
        }
    }
    while(q--){
        int a, b;
        cin>>a>>b;
        a--, b--;
        //To query, take the biggest power of two that is smaller than the range and merge the left and right answers
        int i = log2(b-a+1);
        int ans = min(st[i][a], st[i][b-(1<<i)+1]);
        cout<<ans<<endl;
    }
    return 0;
}