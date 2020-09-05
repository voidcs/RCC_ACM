#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string str;
    cin>>str;
    set<char> s;
    for(int i = 0; i < str.length(); i++)
        s.insert(str[i]);
    
    int n = s.size();
    if(n%2)
        cout<<"IGNORE HIM!\n";
    else
        cout<<"CHAT WITH HER!\n";
    return 0;
}