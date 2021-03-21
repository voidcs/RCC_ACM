#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

struct team{
    string name;
    int solved;
    int penalty;
};

bool comp(team a, team b){
    if(a.solved != b.solved)
        return a.solved > b.solved;
    if(a.penalty != b.penalty)
        return a.penalty < b.penalty;
    return a.name < b.name;
}

int main(){
    srand(time(0));
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    freopen("input1.txt", "r", stdin);
    vector<string> names;
    string s;
    while(getline(cin, s)){
        names.push_back(s);
    }
    random_shuffle(names.begin(), names.end());
    
    int n = rand(eng) % 6 + 15;
    team a[n];
    for(int i = 0; i < n; i++){
        a[i].name = names[i];
        a[i].solved = rand(eng) % 21;
        a[i].penalty = rand(eng) % 1001;
    }
    freopen("input.txt", "w", stdout);
    cout<<n<<endl;
    for(int i = 0; i < n; i++){
        cout<<a[i].name<<endl;
        cout<<a[i].solved<<" "<<a[i].penalty<<endl;
    }
    freopen("output.txt", "w", stdout);
    sort(a, a + n, comp);
    for(int i = 0; i < n; i++)
        cout<<a[i].name<<endl;
    return 0;
}