#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    srand(time(0));
    int n = rand()%200+1;
    n = 1;
    freopen("input.txt", "w", stdout);
    cout<<n<<endl;
    freopen("output.txt", "w", stdout);
    for(int i = 1; i <= n; i++){
        string s;
        if(i%3 == 0)
            s += "Fizz";
        if(i%5 == 0)
            s += "Buzz";
        if(s.empty())
            cout<<i<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}