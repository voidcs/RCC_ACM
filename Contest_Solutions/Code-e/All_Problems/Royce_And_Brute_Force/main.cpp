#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    vector<string> ans;
    for(int i = 0; i < (1<<n); i++){
        string str;
        for(int j = 0; j < n; j++){
            int f = (1<<j);
            if(i & f){
                str += a[j];
            }
        }
        ans.push_back(str);
    }
    
    sort(ans.begin(), ans.end());
    for(auto x: ans){
        cout<<x<<endl;
    }
}