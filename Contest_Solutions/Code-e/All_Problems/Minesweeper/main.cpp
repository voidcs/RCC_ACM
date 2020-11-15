#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
array<int, 2> dir[8] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int main(){
    int n, m;
    cin>>n>>m;

    char a[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>a[i][j];
 
    
    function<bool(int, int)> valid = [&](int x, int y){
        return (x < n && x >= 0 && y < m && y >= 0);
    };
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '.'){
                int count = 0;
                for(int k = 0; k < 8; k++){
                    int newX = i + dir[k][0];
                    int newY = j + dir[k][1];
                    if(valid(newX, newY) && a[newX][newY] == '*')
                        count++; 
                }
                a[i][j] = '0' + count;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}