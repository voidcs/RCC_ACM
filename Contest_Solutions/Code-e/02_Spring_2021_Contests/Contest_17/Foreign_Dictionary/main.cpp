#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        string alpha;
        int n;
        cin>>n>>alpha;
        string a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        
        unordered_map<char, int> m;
        for(int i = 0; i < 26; i++)
            m[alpha[i]] = i;

        auto comp = [&](string x, string y){
            int l = min(x.length(), y.length());
            for(int i = 0; i < l; i++){
                if(m[x[i]] > m[y[i]])
                    return false;
                else if (m[x[i]] < m[y[i]])
                    return true;
            }
            return (x.length() <= y.length());
        };
        
        sort(a, a + n, comp);
        for(int i = 0; i < n; i++){
            cout<<a[i]<<endl;
        }
        cout<<endl;
    } 
    
    return 0;
}