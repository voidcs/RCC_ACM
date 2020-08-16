#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    string str;
    cin>>str;
    
    char lowest = str[0];
    int index = 0;
    for(int i = 1; i < n; i++){
        if(str[i] < lowest){
            cout<<"YES\n";
            cout<<index+1<<" "<<i+1<<endl;
            return 0;
        }
        
        lowest = str[i];
        index = i;
    }
    
    cout<<"NO\n";
    return 0;
}