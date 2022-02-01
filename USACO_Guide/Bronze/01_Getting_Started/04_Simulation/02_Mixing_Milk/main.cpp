#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<int> capacity(3);
    vector<int> have(3);
    for(int i = 0; i < 3; i++){
        cin>>capacity[i]>>have[i];
    }
    for(int i = 0; i < 100; i++){
        int a = (i%3), b = (i+1)%3;
        int pour = min(have[a], capacity[b] - have[b]);
        have[a] -= pour;
        have[b] += pour;
    }
    for(int i = 0; i < 3; i++)
        cout<<have[i]<<endl;
    return 0;
}
