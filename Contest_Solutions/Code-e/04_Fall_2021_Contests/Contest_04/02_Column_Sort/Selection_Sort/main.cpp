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
    
	//Selection sort
	//Note that this solution is the slowest because selection sort is an O(n^2) algorithm rather than the O(nlogn) std::sort
	//i represents a specific column that is currently being sorted
    for(int i = 0; i < m; i++){
		//j represents the index of an element higher up
		//k represents the index of an element below j
		//if v[j][i] is greater than v[k][i], then we must swap them because the two would be out of order
        for(int j = 0; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(v[j][i] > v[k][i])
                    swap(v[j][i], v[k][i]);
            }
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