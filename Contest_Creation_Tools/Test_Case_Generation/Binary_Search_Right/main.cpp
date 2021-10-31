#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    random_device rd;
    mt19937_64 eng(rd());
    uniform_int_distribution<long long> rand;
    int n = rand(eng) % 500 + 500;
    int t = rand(eng) % 100 + 100;
    freopen("input.txt", "w", stdout);
    vector<int> v(n);
    vector<int> answers;
    cout<<n<<" "<<t<<endl;
    for(int &x: v)
        x = rand(eng) % 1000 + 1;
    sort(v.begin(), v.end());
    for(int x: v)
        cout<<x<<" ";
    cout<<endl;
    while(t--){
        int x = rand(eng) % 1000 + 1;
        cout<<x<<endl;
        int l = 0, r = n-1;
        int ans = -1;
        while(l <= r){
            int m = (l+r)/2;
            if(v[m] <= x){
               l = m+1;
               ans = m;
            }
            else
               r = m-1; 
        }
        answers.push_back(ans+1);
    }
    freopen("output.txt", "w", stdout);
    for(int x: answers){
        cout<<x<<endl;
    }
    return 0;
}