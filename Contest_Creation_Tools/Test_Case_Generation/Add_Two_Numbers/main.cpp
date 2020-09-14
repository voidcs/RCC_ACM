#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<int> answers;
    freopen("output.txt", "w", stdout);

    int t = 5 + rand() % 6;
    cout<<t<<endl;
    while(t--){
        int a = rand() % 100;
        int b = rand() % 100;
        cout<<a<<" "<<b<<endl;
        answers.push_back(a+b);
    }

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x<<endl;
    }
    
    return 0;
}