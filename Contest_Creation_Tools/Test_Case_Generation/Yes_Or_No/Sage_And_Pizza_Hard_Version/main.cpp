#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    srand(time(0));
    vector<string> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;
    
    ll r = 1e18-5;
    random_device rd;  
    mt19937_64 eng(rd()); 
    uniform_int_distribution<long long> distr;
    
    while(cases--){
        ll x = distr(eng);
        ll y = distr(eng);

        ll gg = __gcd(x, y);
        ll flip = rand() % 4;
        
        if(flip){
            //while(gg == 1)
            while(gg <= 50){
                x = distr(eng);
                y = distr(eng);
                gg = __gcd(x, y);
            }
        }
        else{
            while(gg != 1){
                x = distr(eng);
                y = distr(eng);
                gg = __gcd(x, y);
            }
        }
        
        flip = rand() % 2;
        gg *= 2;
        ll cost;
        if(flip){
            ll diff = r - gg;
            cost = rand() % diff;
            ll temp = cost + gg + 1;
            cost = temp;
            answers.push_back("NO\n");
        }
        else{
            cost = rand() % (gg-1) + 1;
            answers.push_back("YES\n");
            string temp = to_string(gg);
            answers.push_back(temp + "\n");
        }
        
        cout<<cost<<" "<<x<<" "<<y<<"\n";
//        if(flip){
//            cout<<"NO: ";
//        }
//        if(!flip){
//            cout<<"YES: ";
//        }
//        cout<<"cost: "<<cost<<"   x: "<<x<<"   y: "<<y<<"   gg: "<<gg/2<<endl;
        
    }

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x;
    }
    
    return 0;
}