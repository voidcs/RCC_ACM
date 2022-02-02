#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    vector<vector<char>> v(3, vector<char>(3));
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin>>v[i][j];
    set<set<char>> solo, duo;
    set<char> diag1, diag2;

    auto add = [&](set<char> &s){
        if(s.size() == 1)
            solo.insert(s);
        else if(s.size() == 2)
            duo.insert(s);
    };
    for(int i = 0; i < 3; i++){
        diag1.insert(v[i][i]);
        diag2.insert(v[i][2-i]);
        set<char> row, col;
        for(int j = 0; j < 3; j++){
            row.insert(v[i][j]);
            col.insert(v[j][i]);
        }
        add(row);
        add(col);
    }
    add(diag1);
    add(diag2);
    
    cout<<solo.size()<<endl;
    cout<<duo.size()<<endl;
    return 0;
}
