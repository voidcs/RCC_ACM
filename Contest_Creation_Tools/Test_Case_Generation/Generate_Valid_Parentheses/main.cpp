#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("input.txt", "w", stdout);
    int n = 16;
    cout<<n<<"\n";
    stack<int> last;
    string s;
    vector<string> ans;
    function<void(int)> f = [&](int i){
        if(i == n){
            if(last.empty()){
                ans.push_back(s);
            }
            return;
        }
        //Close
        if(last.size()){
            last.pop();
            s += ')';
            f(i+1);
            last.push(1);
            s.pop_back();
        }
        //Open
        s += '(';
        last.push(1);
        f(i+1);
        s.pop_back();
        last.pop();
    };
    f(0);
    freopen("output.txt", "w", stdout);
    cout<<ans.size()<<"\n";
    sort(ans.begin(), ans.end());
    for(int i = 0; i < min((int)ans.size(), 50); i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}
