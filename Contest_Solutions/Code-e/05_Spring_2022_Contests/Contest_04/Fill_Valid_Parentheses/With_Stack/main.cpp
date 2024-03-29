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
        function<void(int)> f = [&](int i){
            if(i == n){
                if(last.empty()){
                    ans++;
                }
                return;
            }
            //If we get to pick
            if(s[i] == '?'){
                //Try an open
                last.push(1);
                f(i+1);
                last.pop();

                //Try a close parenthesis if the stack is not empty
                if(last.size()){
                    last.pop();
                    f(i+1);
                    last.push(1);
                }
            }
            else if(s[i] != '?'){   //We get no choice here
                if(s[i] == ')'){
                    //Can only continue if there is something in the stack
                    if(last.size()){
                        last.pop();
                        f(i+1);
                        last.push(1);
                    }
                }
                else if(s[i] == '('){   //Try an open
                    last.push(1);
                    f(i+1);
                    last.pop();
                }
            }
        };
        f(0);
        cout<<ans<<"\n";
    }
    return 0;
}
