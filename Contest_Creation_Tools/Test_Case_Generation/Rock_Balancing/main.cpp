#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    
    vector<ll> answers;
    srand(time(0));
    freopen("output.txt", "w", stdout);
    ll t = 3;
    t += rand() % 4;
    t = 10;
    cout<<t<<endl; 
    while(t--){
        int n = 5 + rand() % 6;
        cout<<n<<endl;
        int a[n];
        int total = 0;
        for(int i = 0; i < n; i++){
            a[i] = rand() % 1000 + 1;
            total += a[i];
        }
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;

        int ans = 1e7;
        for(int i = 0; i < (1<<n); i++){
            int sum = 0;
            for(int j = 0; j < n; j++){
                if((1<<j) & i){
                    sum += a[j];
                }
            }
            ans = min(ans, abs((total-sum) - sum));
        }
        answers.push_back(ans);
    }
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;

    return 0;
}