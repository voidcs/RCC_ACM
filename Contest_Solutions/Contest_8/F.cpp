#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        stack<char> s;
        bool flag = 1;
        int n = str.length();
        
        for(int i = 0; i < n; i++){
            if(str[i] == '['){
                s.push('[');
                continue;
            }
            
            if(str[i] == '('){
                s.push('(');
                continue;
            }
            
            if(str[i] == ')'){
                if(s.empty()){
                    flag = 0;
                    break;
                }
                
                if(s.top() == '(')
                    s.pop();
                else{
                    flag = 0;
                    break;
                }
            }
            
            else if(str[i] == ']'){
                if(s.empty()){
                    flag = 0;
                    break;
                }
                
                if(s.top() == '[')
                    s.pop();
                else{
                    flag = 0;
                    break;
                }
            }
        }
        if(s.empty() && flag)
            cout<<"Yes\n";
        else
            cout<<"No\n";
        
    }
    return 0;
}