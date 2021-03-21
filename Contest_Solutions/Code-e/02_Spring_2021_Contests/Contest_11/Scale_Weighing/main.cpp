#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin>>a[i];
        vector<int> ans;
        for(int i = 0 ; i < n; i++){
            if(a[i] >= x)
                ans.push_back(i);
        }
        if(ans.size() == 0)
            cout<<"-1\n";
        else{
            for(int i = 0; i < ans.size(); i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}