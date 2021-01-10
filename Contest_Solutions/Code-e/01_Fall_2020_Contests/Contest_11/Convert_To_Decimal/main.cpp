#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        string str;
        cin>>x>>str;
        int ans = 0;
        int expo = 1;
        for(int i = str.length()-1; i >= 0; i--){
            int digit;
            if(str[i] <= '9')
                digit = str[i] - '0';
            else
                digit = str[i] - 'A' + 10;
            ans += digit * expo;
            expo *= x;
        }
        cout<<ans<<endl;
    }
	return 0;
}