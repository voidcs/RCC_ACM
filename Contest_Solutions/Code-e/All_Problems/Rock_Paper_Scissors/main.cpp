#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    //freopen("input.txt", "r", stdin);
    char a, b;
    map<char, char> m;
    m['R'] = 'S';
    m['S'] = 'P';
    m['P'] = 'R';
    int win = 0, lose = 0, draw = 0;
    while(cin>>a>>b){
        if(a == b)
            draw++;
        else if(m[a] == b)
            win++;
        else
            lose++;
    }
    cout<<win<<" "<<lose<<" "<<draw<<endl;
    
    return 0;
}