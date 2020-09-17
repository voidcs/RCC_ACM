#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    vector<pair<ll, ll>> answers;
    int t;
    t = 5;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    while(t--){
        int n;
        map<int, int> factors;
        n = 2 + (rand() % 9);
        cout<<n<<endl;
        vector<int> num(n), denom(n);

        for(int i = 0; i < n; i++){
            int a = 1 + rand() % 10;
            int b = 1 + rand() % 10;
            num[i] = a;
            denom[i] = b;
            cout<<a<<" "<<b<<endl;
        }

        for(int i = 0; i < n; i++){
            int x = denom[i];
            for(int i = 2; i*i <= x; i++){
                int count = 0;
                if(x % i == 0){
                    while(x % i == 0){
                        count++;
                        x /= i;
                    }
                }
                if(count > 0)
                    factors[i] = max(factors[i], count);
            }
            if(x > 1){
                factors[x] = max(factors[x], 1);
            }
        }
        int LCM = 1;
        for(auto x: factors){
            //cout<<x.first<<"   "<<x.second<<endl;
            LCM *= pow(x.first, x.second);
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += num[i] * (LCM / denom[i]);
        }
        int g = __gcd(ans, LCM);
        ans /= g;
        LCM /= g;
        answers.push_back({ans, LCM});
    }
    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x.first<<"/"<<x.second<<endl;
    }
    return 0;
}



