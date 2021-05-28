#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    int n = rand() % 5 + 26;
    int m = rand() % 5 + 26;
    cout<<n<<" "<<m<<endl;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(rand() % 5 == 1)
                v[i][j] = '#';
            else
                v[i][j] = '.';
            cout<<v[i][j];
        }
        cout<<endl;
    }
    
    int ans = 0;
    vector<array<int, 5>> point;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            //Try cell (i, j) as a starting point
            //Try making top horizontal part of C of length h
            for(int h = 2; j + h <= m; h++){
                //Try making down length of d - 1
                for(int d = 3; i + d <= n; d++){
                    //Try making bottom horizontal part of c length z
                    for(int z = 2; z + j <= m; z++){
                        bool valid = 1;
                        for(int a = 0; a < h; a++)
                            valid &= (v[i][j+a] == '.');
                        for(int b = 0; b < d; b++)
                            valid &= (v[i+b][j] == '.');
                        for(int c = 0; c < z; c++)
                            valid &= (v[i+d-1][j+c] == '.');   
                        if(valid){
                            ans++;
                            point.push_back({i, j, h, d, z});
                        }
                    }
                }
            }
        }
    }
    freopen("output.txt", "w", stdout);
    cout<<ans<<endl;
    
    return 0;
}