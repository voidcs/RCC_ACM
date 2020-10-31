#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    vector<string> answers;
    freopen("output.txt", "w", stdout);
    srand(time(0));
    ll t = 10;
    cout<<t<<endl;
    while(t--){
        ll n;
        int flip = rand() % 2;
        
        if(!flip){
            n = rand() % (ll)1e8;
            while((n & (n-1)) == 0){
                n = rand() % (ll)1e8;
            } 
        }
        else{
            ll r = rand() % 25;
            n = 1<<r;
        }
        cout<<n<<endl;
        if(flip)
            answers.push_back("YES\n");
        else
            answers.push_back("NO\n");
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x;
    }
    return 0;
}