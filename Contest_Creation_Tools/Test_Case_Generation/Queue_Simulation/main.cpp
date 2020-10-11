#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
   
    vector<string> answers;
    int t = 15;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    
    queue<int> q;
    while(t--){
        int r = rand() % 7;
        if(r == 0){
            cout<<"Size\n";
            answers.push_back("size: " + to_string(q.size()));
        }
        else if(r > 2 && r < 6){
            ll r = rand() % 100;
            q.push(r);
            cout<<"Push "<<r<<endl;
        }
        else if(r == 2 || r == 6){
            cout<<"Front\n";
            if(q.empty()){
                answers.push_back("The queue is empty");
            }
            else{
                answers.push_back("front: " + to_string(q.front()));
            }
        }
        else if(r == 1){
            cout<<"Pop\n";
            if(!q.empty())
                q.pop();
        }
    }
    
    
    
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}