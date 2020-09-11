#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<pair<ll, ll>> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;

    while(cases--){
        int n = rand() % 50 + 1;
        cout<<n<<endl;
        vector<int> v;
        int high = -1, low = 200;
        for(int i = 0; i < n; i++){
            int num = rand() % 100 + 1;
            v.push_back(num);
            high = max(high, num);
            low = min(low, num);
        }
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
        answers.push_back({low, high});
    }

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}