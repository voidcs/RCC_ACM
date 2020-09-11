#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    map<string, ll> m;
    while(t--){
        string str;
        cin>>str;
        if(!m.count(str)){
            cout<<"OK\n";
            m[str]++;
        }
        else{
            cout<<str<<m[str]<<endl;
            m[str]++;
        }
        
    }
    return 0;
}