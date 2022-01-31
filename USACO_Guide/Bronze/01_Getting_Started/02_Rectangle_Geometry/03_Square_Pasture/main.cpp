#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct rec{
    int x1, x2, y1, y2;
};

int main(){
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    rec a, b;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;
    int height = max(a.y2, b.y2) - min(a.y1, b.y1);
    int width = max(a.x2, b.x2) - min(a.x1, b.x1);
    int len = max(height, width);
    cout<<len*len<<endl;
    return 0;
}
