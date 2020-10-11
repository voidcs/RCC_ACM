#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
    vector<string> answers;
    
    vector<string> users;
    users.push_back("voidcs");
    users.push_back("sb609");
    users.push_back("rlic3");
    users.push_back("akatsuki");
    users.push_back("sagecs");
    users.push_back("Westnator");
    users.push_back("nameless");
    users.push_back("bthd");
    users.push_back("tyler");
    users.push_back("thomas111");
    users.push_back("heidye");
    users.push_back("gibbyttv");
    
    int r = rand() % users.size();
    vector<string> v;
    v.push_back(users[r]);
    
    int t = 5;
    t += rand() % 15 + 1;
    t = 20;
    cout<<t<<endl;
    cout<<users[r]<<endl;
    users.erase(users.begin() + r);
    answers.push_back("NO");
    t--;
    
    while(t--){
        int flip = rand() % 2;
        if(flip){
            r = rand() % v.size();
            string str = v[r];
            cout<<str<<endl;
            answers.push_back("YES");
        }
        else{
            r = rand() % users.size();
            cout<<users[r]<<endl;
            v.push_back(users[r]);
            users.erase(users.begin() + r);
            answers.push_back("NO");
        }
    }
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}