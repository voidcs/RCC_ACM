#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    vector<vector<string>> bal(21);
    stack<int> last1;
    string str;
    function<void(int, int)> gen = [&](int i, int len){
        if(i == len){
            if(last1.empty()){
                bal[len].push_back(str);
            }
            return;
        }
        //Close
        if(last1.size()){
            last1.pop();
            str += ')';
            gen(i+1, len);
            last1.push(1);
            str.pop_back();
        }
        //Open
        str += '(';
        last1.push(1);
        gen(i+1, len);
        str.pop_back();
        last1.pop();
    };
    for(int i = 2; i <= 20; i += 2){
        gen(0, i);
    }
    freopen("input.txt", "w", stdout);
    int t = rand(eng) % 50 + 50;
    t = 100;
    cout<<t<<"\n";
    vector<int> answers;
    while(t--){
        int n = rand(eng)%20 + 1;
        if(n%2)
            n++;
        cout<<n<<"\n";
        int j = rand(eng) % (int)bal[n].size();
        string s = bal[n][j];
        for(int i = 0; i < n; i++){
            if(rand(eng)%2 == 0)
                s[i] = '?';
        }
        cout<<s<<"\n";
        stack<int> last;
        int ans = 0;
        function<void(int)> f = [&](int i){
            if(i == n){
                if(last.empty()){
                    ans++;
                }
                return;
            }
            //Close
            if(s[i] == '?'){
                //Open
                last.push(1);
                f(i+1);
                last.pop();

                //Close
                if(last.size()){
                    last.pop();
                    f(i+1);
                    last.push(1);
                }
            }
            else if(s[i] != '?'){
                if(s[i] == ')'){
                    if(last.size()){
                        last.pop();
                        f(i+1);
                        last.push(1);
                    }
                }
                else if(s[i] == '('){
                    last.push(1);
                    f(i+1);
                    last.pop();
                }
            }
        };
        f(0);
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<"\n";
    return 0;
}
