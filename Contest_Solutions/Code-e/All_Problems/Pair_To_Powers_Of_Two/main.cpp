#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x: v)
        cin>>x;
    unordered_map<int, int> m;
    unordered_set<int> powersOfTwo;
    for(int i = 0; i <= 30; i++){
        powersOfTwo.insert(1<<i);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(auto x: powersOfTwo){
            int need = x - v[i];
            if(m.count(need)){
                ans += m[need];
            }
        }
        m[v[i]]++;
    }
    cout<<ans<<endl;
    
    return 0;
}