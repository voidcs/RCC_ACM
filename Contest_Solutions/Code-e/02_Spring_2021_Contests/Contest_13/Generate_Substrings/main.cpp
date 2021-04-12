#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.length();
    vector<string> v;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            v.push_back(s.substr(i, j-i+1));
        }
    }
    sort(v.begin(), v.end());
    for(string x: v)
        cout<<x<<endl;
    
    return 0;
}