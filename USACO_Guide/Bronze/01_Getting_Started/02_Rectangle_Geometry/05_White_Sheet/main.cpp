#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

struct rec{
    int x1, x2, y1, y2;
};

int main(){
    rec a, b, white;
    cin>>white.x1>>white.y1>>white.x2>>white.y2;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;

    auto inside = [&](int x, int y, rec b){
        return x >= b.x1 && x <= b.x2 && y >= b.y1 && y <= b.y2;
    };
    auto cornersCovered = [&](rec a, rec b){
        int count = 0;
        count += inside(a.x1, a.y1, b);
        count += inside(a.x1, a.y2, b);
        count += inside(a.x2, a.y1, b);
        count += inside(a.x2, a.y2, b);
        return count;
    };
    //Need to check if each individually corner is covered
    int count = 0;
    count += (inside(white.x1, white.y1, a) || inside(white.x1, white.y1, b));
    count += (inside(white.x1, white.y2, a) || inside(white.x1, white.y2, b));
    count += (inside(white.x2, white.y1, a) || inside(white.x2, white.y1, b));
    count += (inside(white.x2, white.y2, a) || inside(white.x2, white.y2, b));
    //If all corners aren't covered, then we can see the white sheet
    if(count != 4){
        cout<<"YES\n";
        return 0;
    }
    //If one of the black sheets single handledly covers the white sheet, we cannot see it
    if(cornersCovered(white, a) == 4 || cornersCovered(white, b) == 4){
        cout<<"NO\n";
    }
    else if(cornersCovered(white, a) == 2 && cornersCovered(white, b) == 2){
        //Check that the two sheets overlap, it is possible that they don't intersect and still cover all 4 corners
        if(min(a.x2, b.x2) >= max(a.x1, b.x1) && min(a.y2, b.y2) >= max(a.y1, b.y1)){
            cout<<"NO\n";
        }
        else
            cout<<"YES\n";
    }
    else{
        cout<<"YES\n";
    }

    return 0;
}
