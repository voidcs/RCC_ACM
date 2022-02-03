#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int k, n;
    cin>>k>>n;
    vector<vector<int>> v(k, vector<int>(n));
    for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            cin>>v[i][j];

    int ans = 0;
    //Compete cowA vs cowB
    for(int a = 1; a <= n; a++){
        for(int b = a+1; b <= n; b++){
            int cnt = 0;
            for(int i = 0; i < k; i++){
                //First we need to find where cowA and cowB placed
                int indexA = 0, indexB = 0;
                for(int j = 0; j < n; j++){
                    if(v[i][j] == a)
                        indexA = j;
                    if(v[i][j] == b)
                        indexB = j;
                }
                if(indexA < indexB)
                    cnt++;
            }
            //if cnt is 0, then B always beats A
            //if cnt is k, then A always beats B
            if(cnt == 0 || cnt == k)
                ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
