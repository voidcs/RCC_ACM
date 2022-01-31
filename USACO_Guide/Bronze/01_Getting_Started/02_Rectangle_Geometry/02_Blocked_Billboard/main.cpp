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
    rec a, b, truck;
    cin>>a.x1>>a.y1>>a.x2>>a.y2;
    cin>>b.x1>>b.y1>>b.x2>>b.y2;
    cin>>truck.x1>>truck.y1>>truck.x2>>truck.y2;

    auto intersection = [&](rec a, rec b){
        int width = max(0, min(a.x2, b.x2) - max(a.x1, b.x1) );
        int height = max(0, min(a.y2, b.y2) - max(a.y1, b.y1) );
        return width * height;
    };
    auto area = [&](rec a){
        return (a.x2 - a.x1) * (a.y2 - a.y1);
    };
    int ans = area(a) + area(b) - intersection(a, truck) - intersection(b, truck);
    cout<<ans<<endl;
    return 0;
}
