#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    freopen("input.txt", "w", stdout);
    srand(time(0));
    vector<ll> answers;
    ll t;
    t = 8 + rand() % 3;
    cout<<t<<endl;
    while(t--){
        ll n, m;
        n = 30 + rand() % 20 + 1;
        m = rand() % (n*2 + (n/2)) + 1;
        cout<<n<<" "<<m<<endl;
        vector<vector<ll>> adj(n+1);
        vector<bool> vis(n+1, 0);
        vector<int> last(n+1, -1);
        set<array<ll, 2>> s;
        while(m--){
            int a = rand() % n + 1;
            int b = rand() % n + 1;
            while(s.count({a, b})){
                a = rand() % n + 1;
                b = rand() % n + 1;
                while(a == b)
                    b = rand() % n + 1;
            }
            s.insert({a, b});
            cout<<a<<" "<<b<<endl;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        queue<int> q;
        q.push(1);
        while(!q.empty()){
            int curr = q.front();
            vis[curr] = 1;
            q.pop();
            for(int c: adj[curr]){
                if(!vis[c]){
                    vis[c] = 1;
                    last[c] = curr;
                    q.push(c);
                }
            }
        }

        if(last[n] != -1){
            int curr = n;
            vector<int> ans;
            ans.push_back(n);
            while(n != 1){
                ans.push_back(last[n]);
                n = last[n];
            }
            reverse(ans.begin(), ans.end());
            answers.push_back(ans.size());
        }
        else
            answers.push_back(-1);
        cout<<endl;
    }
    
    freopen("output.txt", "w", stdout);
    for(auto x: answers){
        if(!(~x))
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<x-1<<endl;
        }
    }
    
    return 0;
}