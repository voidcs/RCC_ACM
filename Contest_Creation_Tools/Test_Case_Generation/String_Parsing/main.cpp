#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    srand(time(0));
    freopen("input.txt", "w", stdout);
    vector<string> answers;
    int t = rand() % 3 + 3;
    cout<<t<<"\n";
    while(t--){
        int m = rand() % 7 + 7;
        string s = "\"";
        for(int i = 0; i < m; i++){
            if(rand()%3 == 0){
                int l = rand()%11+1;
                int r = rand()%11+1;
                if(l > r)
                    swap(l, r);
                s += to_string(l) + "-" + to_string(r);
            }
            else
                s += to_string(rand()%50+1);
            s += ',';
        }
        s.pop_back();
        s += '\"';
        cout<<s<<"\n";
        string ans;
        int n = s.length()-1;
        for(int i = 1; i < n; i++){
            int j = i, k = -1;
            while(j < n && s[j] != ','){
                if(s[j] == '-')
                    k = j;
                j++;
            }
            if(k == -1){
                if(!ans.empty())
                    ans += ' ';
                ans += s.substr(i, j-i);
            }
            else{
                int l = stoi(s.substr(i, k-i));
                int r = stoi(s.substr(k+1, j-k-1));
                for(int i = l; i <= r; i++){
                    if(!ans.empty())
                        ans += ' ';
                    ans += to_string(i);
                }
            }
            i = j;
        }
        answers.push_back(ans);
    }
    freopen("output.txt", "w", stdout);
    for(auto x: answers)
        cout<<x<<"\n";
}
