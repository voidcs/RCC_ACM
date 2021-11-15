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
        int index = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout<<index<<endl;
    }
    return 0;
}