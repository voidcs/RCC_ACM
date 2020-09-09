#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<string> answers;
    freopen("output.txt", "w", stdout);
    
    ll cases = 10;
    cout<<cases<<endl;
    
    ll r = 2000;
    while(cases--){
        ll x = (rand() % r) + 1;
        ll y = (rand() % r) + 1;

        ll gg = __gcd(x, y);
        int flip = rand() % 4;
        
        if(flip){
            //while(gg == 1)
            while(gg == 1){
                x = (rand() % r) + 1;
                y = (rand() % r) + 1;
                gg = __gcd(x, y);
            }
        }
        else{
            while(gg != 1){
                x = (rand() % r) + 1;
                y = (rand() % r) + 1;
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