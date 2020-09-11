#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<vector<int>> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;
    while(cases--){
        int size = rand() % 20 + 1;
        cout<<size<<endl;
        vector<int> v;
        for(int i = 0; i < size; i++){
            int num = rand() % 201 - 100;
            v.push_back(num);
        }
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
        sort(v.begin(), v.end());
        answers.push_back(v);
    }
    
    freopen("answers.txt", "w", stdout);
    for(int i = 0; i < answers.size(); i++){
        for(int j = 0; j < answers[i].size(); j++){
            cout<<answers[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}