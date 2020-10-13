#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll n;
    cin>>n;
    
    queue<int> q;
    while(n--){
        string str;
        cin>>str;
        if(str == "Push"){
            int x;
            cin>>x;
            q.push(x);
        }
        else if(str == "Pop"){
            if(!q.empty())
                q.pop();
        }
        else if(str == "Size"){
            cout<<"size: "<<q.size()<<endl;
        }
        else if(str == "Front"){
            if(q.empty())
                cout<<"The queue is empty\n";
            else
                cout<<"front: "<<q.front()<<endl;
        }
    }
    return 0;
}