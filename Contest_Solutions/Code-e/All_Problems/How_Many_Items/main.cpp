#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        set<char> ans;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i]))
                ans.insert(s[i]);
        }
        cout<<ans.size()<<endl;
    }
    return 0;
}