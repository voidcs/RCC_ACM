#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin>>n;
    map<string, int> m;
    
    while(n--){
        string str;
        cin>>str;
        m[str]++;
        if(m[str] == 1){
            cout<<"NO\n";
        }
        else
            cout<<"YES "<<m[str]<<endl;
    }
    return 0;
}