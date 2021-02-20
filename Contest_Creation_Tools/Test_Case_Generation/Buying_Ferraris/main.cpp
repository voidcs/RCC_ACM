#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    int ans = 0;
    int n = rand()%10000 + 1;
    cout<<n<<endl;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = rand()%10000;
        cout<<a[i]<<" ";
        ans += a[i];
    }
    freopen("output.txt", "w", stdout);
    cout<<ans<<endl;
    return 0;
}