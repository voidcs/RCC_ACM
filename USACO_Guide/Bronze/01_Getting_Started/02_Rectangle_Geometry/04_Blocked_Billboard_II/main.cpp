#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct rec{
    int x1, x2, y1, y2;
};

int main(){
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    rec a, b;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;

    auto inside = [&](int x, int y, rec b){
        return x >= b.x1 && x <= b.x2 && y >= b.y1 && y <= b.y2;
    };
    int cornersCovered = 0;
    cornersCovered += inside(a.x1, a.y1, b);
    cornersCovered += inside(a.x1, a.y2, b);
    cornersCovered += inside(a.x2, a.y1, b);
    cornersCovered += inside(a.x2, a.y2, b);

    int area = (a.y2 - a.y1) * (a.x2 - a.x1);
    if(cornersCovered <= 1){
        cout<<area<<endl;
    }
    else if(cornersCovered == 4){
        cout<<"0\n";
    }
    else{
        //find the intersection of the two billboards
        int width = (min(a.x2, b.x2) - max(a.x1, b.x1));
        int height = (min(a.y2, b.y2) - max(a.y1, b.y1));
        cout<<area - (width * height)<<endl;
    }
    return 0;
}
