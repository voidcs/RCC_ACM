#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
char dir2[4] = {'D', 'R', 'U', 'L'};
 
int main(){
    srand(time(0));
    //freopen("input.txt", "r", stdin);
    freopen("input.txt", "w", stdout);
    vector<string> answers;
    ll t;
    t = 5 + rand() % 6;
    cout<<t<<endl;
    while(t--){
        ll n, m;
        n = 80 + rand() % 20 + 1;
        m = 80 + rand() % 20 + 1;
        cout<<n<<" "<<m<<endl;
        vector<vector<char>> a(n, vector<char>(m));
        vector<vector<int>> dx(n, vector<int>(m, -1));
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int flip = rand() % 10;
                if(flip > 3)
                    a[i][j] = '.';
                else
                    a[i][j] = '#';
            }
        }
        int startX = rand() % n;
        int startY = rand() % m;
        a[startX][startY] = 'A';
        int endX = rand() % n;
        int endY = rand() % m;
        while(endX == startX && endY == startY){
            endX == rand() % n;
            endY == rand() % m;
        }
        a[endX][endY] = 'B';

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        function<bool(int, int)> valid = [&](int x, int y){
            return(x >= 0 && x < n && y >= 0 && y < m && a[x][y] != '#');
        };

        queue<array<int, 2>> q;
        q.push({startX, startY});
        bool flag = 0;
        while(!q.empty()){
            int x = q.front()[0], y = q.front()[1];
            q.pop();
            for(int i = 0; i < 4; i++){
                int newX = x + dir[i][0];
                int newY = y + dir[i][1];
                if(valid(newX, newY)){
                    q.push({newX, newY});
                    a[newX][newY] = '#';
                    dx[newX][newY] = i;
                }
            }
        }

        if(dx[endX][endY] != -1){
            string ans;
            while(startX != endX || startY != endY){
                int d = dx[endX][endY];
                ans += dir2[d];
                //Subtract the direction took to get here in order to backtrack
                endX -= dir[d][0];
                endY -= dir[d][1];
            }
            reverse(ans.begin(), ans.end());
            answers.push_back(ans);
        }
        else
            answers.push_back("-1");
        cout<<endl;
    }
    
    freopen("output.txt", "w", stdout);
    for(auto x: answers){
        if(x == "-1")
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<x.size()<<endl;
        }
    }
    
    return 0;
}