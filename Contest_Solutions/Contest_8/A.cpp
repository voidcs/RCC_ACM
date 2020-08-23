#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin>>n;
    set<char> s;
    bool found = 0;
    n++;
    while(!found){
        set<char> s;
        string str = to_string(n);
        for(int i = 0; i < 4; i++){
            s.insert(str[i]);
        }
        if(s.size() == 4)
            found = 1;
        else{
            n++;
        }
    }
    cout<<n;
    return 0;
}