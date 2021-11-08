#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n = 5;
        char a[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin>>a[i][j];
        
        array<int, 2> dir[8] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
        bool flag = 0;
        
        function<bool(int, int)> valid = [&](int x, int y){
            return x >= 0 && x < n && y >= 0 && y < n;
        };
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int d = 0; d < 8; d++){
                    int cnt = 0;
                    for(int k = 0; k < 5; k++){
                        int nx = i + dir[d][0]*k;
                        int ny = j + dir[d][1]*k;
                        if(valid(nx, ny) && a[nx][ny] != '.')
                            cnt++;
                    }
                    if(cnt == 5)
                        flag = 1;
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}