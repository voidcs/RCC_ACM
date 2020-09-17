#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    
    return gcd(b, a % b);
}

int main(){
    srand(time(0));
    //freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    vector<vector<pair<ll, ll>>> answers;
    int t;
    t = 5;
    t += rand() % 5 + 1;
    cout<<t<<endl;
    while(t--){
        ll n;
        map<int, int> factors;
        n = 2 + (rand() % 4);
        cout<<n<<endl;
        vector<ll> num(n), denom(n);

        for(int i = 0; i < n; i++){
            ll a = 1 + rand() % 500;
            ll b = 1 + rand() % 500;
            num[i] = a;
            denom[i] = b;
            cout<<a<<" "<<b<<" ";
        }

        for(int i = 0; i < n; i++){
            ll x = denom[i];
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
        ll LCM = 1;
        for(auto x: factors){
            //cout<<x.first<<"   "<<x.second<<endl;
            LCM *= pow(x.first, x.second);
        }
        ll ans = 0;
        vector<pair<ll, ll>> temp;
        for(int i = 0; i < n; i++){
            ll x = num[i] * (LCM / denom[i]);
            ans += x;
            temp.push_back({x, LCM});
        }
        ll g = gcd(ans, LCM);
        ans /= g;
        LCM /= g;
        temp.push_back({ans, LCM});
        answers.push_back(temp);
        cout<<endl;
    }
    
    freopen("answers.txt", "w", stdout);
    for(int i = 0; i < answers.size(); i++){
        for(int j = 0; j < answers[i].size(); j++){
            cout<<answers[i][j].first<<"/"<<answers[i][j].second;
            if(j < answers[i].size() - 2)
                cout<<" + ";
            else if(j == answers[i].size() - 2)
                cout<<" = ";
        }
        cout<<endl;
    }
    
    return 0;
}



