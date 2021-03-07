#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    srand(time(0));
    vector<int> answers;
    freopen("input.txt", "w", stdout);
    int t = 40 + rand()%10;
    cout<<t<<endl;
    while(t--){
        int x = rand()%10000000;
        cout<<x<<endl;
        int ans = 0;
        while(x){
            ans += x%10;
            x /= 10;
        }
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}