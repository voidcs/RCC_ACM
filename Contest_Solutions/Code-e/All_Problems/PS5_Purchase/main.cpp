#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
array<int, 2> dir[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
char dir2[4] = {'D', 'R', 'U', 'L'};
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<vector<char>> a(n, vector<char>(m)); //Our character array to hold the grid
        vector<vector<bool>> vis(n, vector<bool>(m, 0));    //Says if each cell is visited or not
        vector<vector<int>> dist(n, vector<int>(m, 0));     //Holds the distances from the starting point
        int startX, startY, endX, endY;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[i][j];
                //Mark the coordinates for the starting point
                if(a[i][j] == 'A')
                    startX = i, startY = j;
                //Mark the coordinates for the end point
                if(a[i][j] == 'B')
                    endX = i, endY = j;
            }
        }
        
        //Simply checking if the next node to visit is not out of bounds
        function<bool(int, int)> valid = [&](int x, int y){
            return(x >= 0 && x < n && y >= 0 && y < m && a[x][y] != '#');
        };
     
        //Queue holding a pair
        queue<array<int, 2>> q;
        //Push the starting position into the queue
        q.push({startX, startY});

        while(!q.empty()){
            //Store the coordinates before we pop the front of the queue
            int x = q.front()[0], y = q.front()[1];
            //Mark this node as visited
            vis[x][y] = 1;
            q.pop();
            
            //For each of the 4 directions in the directions array
            for(int i = 0; i < 4; i++){
                //Set the new directions based on the global direction array
                int newX = x + dir[i][0];
                int newY = y + dir[i][1];
                //If the child is not out of bounds and is not visited, then we can add it to the queue
                if(valid(newX, newY) && !vis[newX][newY]){
                    vis[newX][newY] = 1;        //Mark it as visited
                    q.push({newX, newY});       //Add it to queue
                    dist[newX][newY] = dist[x][y] + 1;  //Set its distance to be the distance of its parent + 1
                }
            }
        }
        
        //If the end was visited, then we have a possible path
        if(vis[endX][endY]){
            cout<<"YES\n";
            cout<<dist[endX][endY]<<endl;
        }
        //Otherwise we could not have reached it
        else
            cout<<"NO\n";
    }
    
    return 0;
}