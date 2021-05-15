#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    freopen("input.txt", "w", stdout);
    vector<ll> answers;
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    int t = rand(eng) % 5 + 10;
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % 6 + 3;
        int m = rand(eng) % 6 + 3;
        string a, b;
        for(int i = 0; i < n; i++)
            a += 'a' + rand(eng) % 26;
        for(int i = 0; i < m; i++)
            b += 'a' + rand(eng) % 26;
        cout<<a<<" "<<b<<endl;
        int x = 0, y = 0;
        for(int i = 0; i < n; i++){
            int c = a[i] - 'a';
            x |= (1 << c);
        }
        for(int i = 0; i < m; i++){
            int c = b[i] - 'a';
            y |= (1 << c);
        }
        if((x & y) == 0)
            answers.push_back(0);
        else
            answers.push_back(1);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers){
        if(!x)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}