#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> rand;
    vector<int> answers;
    freopen("input.txt", "w", stdout);
    int t = rand(eng) % 15 + 6;
    cout<<t<<endl;
    while(t--){
        int n = rand(eng) % 50 + 20;
        set<int> s;
        while(s.size() < n){
            s.insert(rand(eng)%100+1);
        }
        vector<int> v;
        for(auto x: s)
            v.push_back(x);
        random_shuffle(v.begin(), v.end());
        for(int i = 0; i < n-1; i++)
            v.push_back(v[i]);
        answers.push_back(v[n-1]);
        random_shuffle(v.begin(), v.end());
        
        n = v.size();
        cout<<n<<endl;
        for(int i = 0; i < n; i++)
            cout<<v[i]<<" ";
        cout<<endl; 
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}