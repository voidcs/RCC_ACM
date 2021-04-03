#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("input.txt", "w", stdout);
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    
    vector<int> answers;
    int t = rand(eng) % 20 + 20;
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % 100 + 100;
        int a[n];
        for(int i = 0; i < n; i++){
            a[i] = rand(eng)%1000 + 1;
            if(rand(eng)%3 == 0)
                a[i] *= -1;
        }
        cout<<n<<endl;
        for(int i = 0; i < n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        int ans = -1e8;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int sum = 0;
                for(int k = 0; k < j-i+1; k++){
                    sum += a[i+k];
                }
                ans = max(ans, sum);
            }
        }
        answers.push_back(ans);
    }
    
    freopen("output.txt", "w", stdout);
    for(int x: answers)
        cout<<x<<endl;

    return 0;
}