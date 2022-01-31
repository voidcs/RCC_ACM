#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int t;
    cin>>t;
    while(t--){
        int W, H, w, h;
        int x1, x2, y1, y2;
        cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
        int blueH = y2 - y1;
        int blueW = x2 - x1;

        //If we can fit it vertically
        int ans = 1e9;
        if(blueH + h <= H){
            ans = min(ans, h - (H-y2));
            ans = min(ans, h - y1);
        }
        //If we can fit it horizontally
        if(blueW + w <= W){
            ans = min(ans, w - (W-x2));
            ans = min(ans, w - x1);
        }
        //If it can already fit, we might have a negative length here
        ans = max(ans, 0);
        if(ans == 1e9)
            cout<<"-1\n";
        else
            cout<<ans<<endl;
    }
    return 0;
}
