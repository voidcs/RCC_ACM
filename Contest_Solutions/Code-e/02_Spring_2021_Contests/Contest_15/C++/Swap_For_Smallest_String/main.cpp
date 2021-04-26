#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t = s;
    sort(t.begin(), t.end());
    int i = 0;
    while(s[i] == t[i])
        i++;
    int j = i+1, index = -1;
    char c = 'z' + 1;
    for(int j = i+1; j < n; j++){
        if(s[j] <= c){
            c = s[j];
            index = j;
        }
    }
    if(s != t){
        swap(s[i], s[index]);
    }
    cout<<s<<endl;
    return 0;
}