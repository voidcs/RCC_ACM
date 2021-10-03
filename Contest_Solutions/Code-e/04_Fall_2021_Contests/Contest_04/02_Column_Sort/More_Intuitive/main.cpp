#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;
 
int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> v(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin>>v[i][j];
    
    for(int i = 0; i < m; i++){
		//Create a new vector with all of the elements in this column
		//After the new vector is created, we simply sort this vector and then copy it over
        vector<int> newColumn;
        for(int j = 0; j < n; j++){
            newColumn.push_back(v[j][i]);
        }
        sort(newColumn.begin(), newColumn.end());
		//Copy the sorted vector into our original column
        for(int j = 0; j < n; j++){
            v[j][i] = newColumn[j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}