#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        vector<vector<ll>> adj(n+1);    //Adjacency list to store the nodes
        vector<bool> vis(n+1, 0);       //Visited array
        vector<int> dist(n+1, 0);       //Distance array
        while(m--){
            int a, b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        
        queue<int> q;
        q.push(1);  //Push 1 to start the bfs
        while(!q.empty()){
            int curr = q.front();   //Store the front of the queue
            vis[curr] = 1;          //Mark it as visited
            q.pop();                //Pop the front of the queue
            for(int c: adj[curr]){  //For each of the children of this node, if it is not visited, add it to the queue
                if(!vis[c]){
                    vis[c] = 1;     //Set it as visited
                    dist[c] = dist[curr] + 1;   //Set the distance to be one more than the distance of its parent
                    q.push(c);                  //Add it to the queue
                }
            }
        }
        
        //If we were able to visit n then it is possible
        if(vis[n]){
            cout<<"YES\n";
            cout<<dist[n]<<endl;
        }
        else
            cout<<"NO\n";
    }
    
    return 0;
}