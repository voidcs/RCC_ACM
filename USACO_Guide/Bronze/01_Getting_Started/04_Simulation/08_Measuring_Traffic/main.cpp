#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    int n;
    cin>>n;
    vector<string> censor(n);
    vector<array<int, 2>> reading(n);
    for(int i = 0; i < n; i++){
        cin>>censor[i]>>reading[i][0]>>reading[i][1];
    }
    const int inf = 1e9;
    int upperBound = inf, lowerBound = -inf;
    for(int i = n-1; i >= 0; i--){
        if(censor[i] == "none"){
            lowerBound = max(lowerBound, reading[i][0]);
            upperBound = min(upperBound, reading[i][1]);
        }
        else if(censor[i] == "on"){
            if(upperBound == inf)
                continue;
            upperBound -= reading[i][0];
            lowerBound -= reading[i][1];
        }
        else if(censor[i] == "off"){
            if(upperBound == inf)
                continue;
            upperBound += reading[i][1];
            lowerBound += reading[i][0];
        }
    }
    lowerBound = max(lowerBound, 0);
    cout<<lowerBound<<" "<<upperBound<<endl;
    upperBound = inf, lowerBound = -inf;
    for(int i = 0; i < n; i++){
        if(censor[i] == "none"){
            lowerBound = max(lowerBound, reading[i][0]);
            upperBound = min(upperBound, reading[i][1]);
        }
        else if(censor[i] == "on"){
            if(upperBound == inf)
                continue;
            upperBound += reading[i][1];
            lowerBound += reading[i][0];
        }
        else if(censor[i] == "off"){
            if(upperBound == inf)
                continue;
            lowerBound -= reading[i][1];
            upperBound -= reading[i][0];
        }
    }
    lowerBound = max(lowerBound, 0);
    cout<<lowerBound<<" "<<upperBound<<endl;
    return 0;
}
