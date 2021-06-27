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
    int n = rand(eng) % 100 + 900, m = rand(eng) % 100 + 900;
    cout<<n<<" "<<m<<endl;
    vector<int> p(n+1);
    for(int i = 0; i < m; i++){
        int x = rand(eng) % 1000 + 1;
        int l = rand(eng) % n + 1;
        int r = rand(eng) % n + 1;
        if(r < l)
            swap(l, r);
        cout<<x<<" "<<l<<" "<<r<<endl;
        p[l-1] += x;
        p[r] -= x;
    }
    int sum = 0;
    freopen("output.txt", "w", stdout);
    for(int i = 0; i < n; i++){
        sum += p[i];
        cout<<sum<<" ";
    }
    cout<<endl;
    
    return 0;
}