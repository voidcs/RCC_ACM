#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("input.txt", "w", stdout);
    vector<string> answers;
    srand(time(0));
    ll n = rand()%5 + 5;
    cout<<n<<endl;
    for(int i = 0; i < n; i++){
        int flip = rand()%2;
        ll len = rand()%6+3;
        cout<<len<<endl;
        string str;
        if(flip){
            for(int j = 0; j < len; j++){
                str += 'A' + rand()%26;
            }
            if(str[0] == str[len-1])
                str[0] = 'A' + ((str[0]-'A'+1)%26);
        }
        else{
            ll half = len/2;
            for(int j = 0; j < half; j++){
                str += 'A' + rand()%26;
            }
            string s = str;
            if(len%2)
                s += 'A' + rand()%26;
            reverse(str.begin(), str.end());
            s += str;
            str = s;
        }
        if(flip)
            answers.push_back("NO\n");
        else
            answers.push_back("YES\n");
        cout<<str<<endl;
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x;
    return 0; 
}