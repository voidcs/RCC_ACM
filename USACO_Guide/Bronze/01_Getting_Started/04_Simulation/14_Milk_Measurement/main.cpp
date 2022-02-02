#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct record{
    int time, change;
    string name;
};
int main(){
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out", "w", stdout);
    int n;
    cin>>n;
    vector<record> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].time>>v[i].name>>v[i].change;
    }

    auto comp = [&](record a, record b){
        return a.time < b.time;
    };
    sort(v.begin(), v.end(), comp);
    map<string, int> m;
    m["Bessie"] = 7;
    m["Elsie"] = 7;
    m["Mildred"] = 7;

    set<string> display;
    //Insert all the cows into the display at the start
    for(auto x: m){
        display.insert(x.first);
    }
    
    int ans = 0;
    for(auto x: v){
        m[x.name] += x.change;
        set<string> newDisplay; //See what the new display would be
        int most = 0;
        //Find the best score
        for(auto y: m){
            most = max(most, y.second);
        }
        //Add the cows into the new display which have the best score
        for(auto y: m){
            if(y.second == most)
                newDisplay.insert(y.first);
        }
        //If they're not equal, increment answer
        if(newDisplay != display)
            ans++;
        display = newDisplay;
    }
    cout<<ans<<endl;
    return 0;
}
