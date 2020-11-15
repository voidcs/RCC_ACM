#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
array<int, 2> dir[8] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    int n = 20 + rand() % 10;
    int m = 20 + rand() % 10;
    char a[n][m];
    int x = (n*m) / 2;
    int count = 0;
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            a[i][j] = '.';
    while(count < x){
        int row = rand() % n;
        int col = rand() % m;
        if(a[row][col] == '.'){
            count++;
            a[row][col] = '*';
        }
    }
    
    cout<<n<<" "<<m<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    function<bool(int, int)> valid = [&](int x, int y){
        return (x < n && x >= 0 && y < m && y >= 0);
    };
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '.'){
                count = 0;
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
    
    freopen("output.txt", "w", stdout);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}