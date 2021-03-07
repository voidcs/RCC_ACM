#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    srand(time(0));
    vector<int> answers;
    freopen("input.txt", "w", stdout);
    int t = rand() % 45 + 5;
    cout<<t<<endl;
    while(t--){
        set<char> s;
        int n = rand()%40+2;
        char a[n];
        for(int i = 0; i < n; i++)
            a[i] = 'a' + rand()%26;
        cout<<"{";
        for(int i = 0; i < n-1; i++)
            cout<<a[i]<<", ";
        cout<<a[n-1]<<"}\n";
        for(int i = 0; i < n; i++)
            s.insert(a[i]);
        answers.push_back(s.size());
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    
    return 0;
}