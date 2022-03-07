#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<int> last;
        int ans = 0;
        int bal = 0;
        function<void(int)> f = [&](int i){
            if(i == n){
                if(bal == 0){
                    ans++;
                }
                return;
            }
            //If we get to pick
            if(s[i] == '?'){
                //Try an open
                bal++;
                f(i+1);
                bal--;

                //Try a close parenthesis if the stack is not empty
                if(bal > 0){
                    bal--;
                    f(i+1);
                    bal++;
                }
            }
            else if(s[i] != '?'){   //We get no choice here
                if(s[i] == ')'){
                    //Can only continue if there is something in the stack
                    if(bal > 0){
                        bal--;
                        f(i+1);
                        bal++;
                    }
                }
                else if(s[i] == '('){ 
                    bal++;
                    f(i+1);
                    bal--;
                }
            }
        };
        f(0);
        cout<<ans<<"\n";
    }
    return 0;
}
