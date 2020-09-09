#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<string> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;
    ll num;
    while(cases--){
        vector<ll> v;
        ll r = 1e8 - 5;
        ll x = rand() % (r);
        x += 2;

        int size = rand() % 99;
        size += 2;
        cout<<size<<" "<<x<<endl;
        int flip = rand() % 2;
        if(flip){
            num = (rand() % r) + 1;
            v.push_back(num);
            v.push_back(x - num);
            for(int i = 0; i < size - 2; i++){
                num = (rand() % r) + 1;
                v.push_back(num);
            }
        }
        else{
            set<ll> used;
            for(int i = 0; i < size; i++){
                num = (rand() % r) + 1;
                int sol = x - num;
                while(used.count(sol)){
                    num = (rand() % r) + 1;
                    sol = x - num;
                }
                used.insert(num);
                v.push_back(num);
            }
        }
        
        random_shuffle(v.begin(), v.end());
        for(auto x: v){
            cout<<x<<" ";
        }

        cout<<endl;
        if(flip){
            answers.push_back("YES\n");
        }
        else
            answers.push_back("NO\n");
    }

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x;
    }
    
    return 0;
}