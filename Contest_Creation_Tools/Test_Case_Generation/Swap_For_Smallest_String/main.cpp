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
    string s;
    int n = rand(eng) % (int)1e5;
    for(int i = 0; i < n; i++){
        s += 'a' + (rand(eng)%26);
    }
    cout<<n<<endl<<s<<endl;
    string t = s;
    sort(t.begin(), t.end());
    int i = 0;
    while(s[i] == t[i])
        i++;
    int j = i+1, index = -1;
    char c = 'z' + 1;
    for(int j = i+1; j < n; j++){
        if(s[j] <= c){
            c = s[j];
            index = j;
        }
    }
    if(s != t){
        swap(s[i], s[index]);
    }
    freopen("output.txt", "w", stdout);
    cout<<s<<endl;
    return 0;
}