#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    
    vector<ll> answers;
    srand(time(0));
    freopen("output.txt", "w", stdout);
    ll n = 3;
    n += rand() % 4;
    cout<<n<<endl; 
    char a[n];
    for(int i = 0; i < n; i++){
        a[i] = (char)('a' + rand() % 26);
    }
    
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    
    freopen("answers.txt", "w", stdout);
    vector<string> ans;
    for(int i = 0; i < (1<<n); i++){
        string str;
        for(int j = 0; j < n; j++){
            if((1<<j) & i){
                str += a[j];
            }
        }
        ans.push_back(str);
    }
    sort(ans.begin(), ans.end());
    for(auto x: ans)
        cout<<x<<endl;

    return 0;
}