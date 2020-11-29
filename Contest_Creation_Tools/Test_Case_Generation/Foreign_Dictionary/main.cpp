#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
    ll t;
    t = 5 + rand() % 6;
    vector<vector<string>> answers(t);
    cout<<t<<endl;
    ll te = 0;
    while(t--){
        string alpha;
        for(int i = 0; i < 26; i++){
            alpha += 'a' + i;
        }
        random_shuffle(alpha.begin(), alpha.end());
        ll n = 20 + rand() % 5;
        cout<<n<<endl<<alpha<<endl;
        string a[n];
        for(int i = 0; i < n; i++){
            string s;
            int len = rand() % 7 + 1;
            for(int j = 0; j < len; j++)
                s += rand() % 26 + 'a';
            a[i] = s;
        }
        for(int i = 0; i < n; i++)
            cout<<a[i]<<endl;

        unordered_map<char, int> m;
        for(int i = 0; i < 26; i++)
            m[alpha[i]] = i;

        function<bool(string, string)> comp = [&](string x, string y){
            int l = min(x.length(), y.length());
            for(int i = 0; i < n; i++){
                if(m[x[i]] > m[y[i]])
                    return false;
                else if (m[x[i]] < m[y[i]])
                    return true;
            }
            return (x.length() <= y.length());
        };
        
        sort(a, a + n, comp);
        for(int i = 0; i < n; i++){
            answers[te].push_back(a[i]);
        }
        te++;
    } 
   
    freopen("output.txt", "w", stdout);
    for(int i = 0; i < answers.size(); i++){
        for(int j = 0; j < answers[i].size(); j++){
            cout<<answers[i][j]<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}