#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = 1;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0)
                flag = 0;
        }
        if(flag)
            cout<<"BUY\n";
        else
            cout<<"WAIT\n";
    }
    return 0;
}