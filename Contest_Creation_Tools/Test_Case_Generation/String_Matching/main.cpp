#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    vector<string> answers;
    int t = rand(eng) % 10 + 10;
    freopen("input.txt", "w", stdout);
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % (int)1e3;
        int m = rand(eng) % (int)1e3;
        if(n < m)
            swap(n, m);
        string a, b;
        for(int i = 0; i < n; i++){
            a += 'a' + (rand(eng)%26);
        }
        vector<bool> take(n);
        for(int i = 0; i < m; i++)
            take[i] = 1;
        random_shuffle(take.begin(), take.end());
        for(int i = 0; i < n; i++){
            if(take[i])
                b += a[i];
        }
        if(rand(eng)%2){
            answers.push_back("YES");
        }
        else{
            answers.push_back("NO");
            auto ok = [&](){
                int j = 0;
                for(char c: a){
                    if(j < m && b[j] == c)
                        j++;
                }
                return j == m;
            };
            while(ok()){
                int i = rand(eng) % m;
                b[i] = 'a' + (rand(eng) % 26);
            }
        }
        cout<<n<<" "<<m<<endl;
        cout<<a<<" "<<b<<endl;
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}
