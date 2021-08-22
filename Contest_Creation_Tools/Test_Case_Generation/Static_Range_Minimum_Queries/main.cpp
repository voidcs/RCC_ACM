#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    freopen("input.txt", "w", stdout);
    int n = rand(eng) % (int)2e5 + 5;
    int q = rand(eng) % (int)1e2 + 50;
    cout<<n<<" "<<q<<endl;
    vector<int> v(n);
    for(int &x: v)
        x = rand(eng) % (int)1e3 + 1;
    for(int x: v)
        cout<<x<<" ";
    cout<<endl;
    int pow2 = 0;
    while((1<<(pow2+1)) <= n)
       pow2++; 
    vector<vector<int>> st(pow2+1, vector<int>(n));
    for(int i = 0; i < n; i++){
        st[0][i] = v[i];
    }
    for(int j = 1; j <= pow2; j++){
        for(int i = 0; i < n; i++){
            if(i + (1<<j) <= n){
                st[j][i] = min(st[j-1][i], st[j-1][i + (1<<(j-1))]);
            }
        }
    }
    vector<int> answers;
    while(q--){
        int a = rand(eng) % n + 1;
        int b = rand(eng) % n + 1;
        a = 1, b = n;
        if(a > b)
            swap(a, b);
        cout<<a<<" "<<b<<endl;
        a--, b--;
        int p = 0;
        while((1<<(p+1)) <= (b-a+1))
            p++;
        int ans = min(st[p][a], st[p][b-(1<<p)+1]);
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}