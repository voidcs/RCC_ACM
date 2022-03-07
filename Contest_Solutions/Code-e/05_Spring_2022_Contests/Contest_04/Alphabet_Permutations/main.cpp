#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    int n;
    cin>>n;
    vector<char> characterList(n);
    for(int i = 0; i < n; i++){
        characterList[i] = 'a' + i;
    }
    vector<int> vis(n);
    string s;
    vector<string> ans;
    function<void(int)> gen = [&](int lettersTaken){
        //Used all letters, we are done
        if(lettersTaken == n){
            ans.push_back(s);
            return;
        }
        
        //Try adding another letter
        for(int j = 0; j < n; j++){
            char c = characterList[j];
            //If this letter has not been used yet
            if(!vis[c-'a']){
                vis[c-'a'] = 1; //Mark it as used so that we don't take it again later
                s += c;         //Add it to our current string
                gen(lettersTaken+1);
                //Anything after this has completed using this letter
                s.pop_back();       //So let's remove it from our string
                vis[c-'a'] = 0;     //And mark it as unvisited for other permutations
            }
        }
    };
    gen(0);
    for(int i = 0; i < min(50, (int)ans.size()); i++)
        cout<<ans[i]<<"\n";
}
