#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);
    string s;
    cin>>s;
    int n = s.length();
    int ans = 0;
    for(char a = 'A'; a <= 'Z'; a++){
        for(char b = 'A'; b <= 'Z'; b++){
            int startA = 1e9, endA = 0;
            int startB = 1e9, endB = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == a){
                    startA = min(startA, i);
                    endA = i;
                }
                else if(s[i] == b){
                    startB = min(startB, i);
                    endB = i;
                }
            }
            if(startA < startB && startB < endA && endB > endA){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
