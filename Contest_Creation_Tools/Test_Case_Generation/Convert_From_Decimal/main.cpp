#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<string> answers;
    freopen("input.txt", "w", stdout);
    ll t = 5 + rand() % 6;
    cout<<t<<endl;
    while(t--){
        ll x, n;
        x = 2 + rand()%31;
        n = rand() % (ll)1e9;
        cout<<x<<" "<<n<<endl;
        //cin>>x>>n;
        string ans;
        while(n){
            int digit = n%x;
            if(digit < 10)
                ans += '0' + digit;
            else
                ans += 'A' + (digit-10);
            n /= x;
        }
        reverse(ans.begin(), ans.end());
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<endl;
    return 0;
}