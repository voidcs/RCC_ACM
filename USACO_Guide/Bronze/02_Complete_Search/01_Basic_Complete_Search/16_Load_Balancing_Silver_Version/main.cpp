#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("balancing.in", "r", stdin);
    freopen("balancing.out", "w", stdout);
    int n;
    cin>>n;
    vector<array<int, 2>> v(n);
    for(auto &x: v)
        cin>>x[0]>>x[1];
    vector<array<int, 2>> vert = v;
    auto comp = [&](array<int, 2> a, array<int, 2> b){
        return a[1] < b[1];
    };
    sort(vert.begin(), vert.end(), comp);
    sort(v.begin(), v.end());
    int ans = 1e9;
	//Do a line sweep
    for(int i = 0; i < n; i++){
        int left = i;
        while(left < n && v[left][0] == v[i][0])
            left++;
		//Since the array is sorted by x
		//Left and right can hold how many cows on each
		//side of this vertical line
        int right = n - left;
        vector<int> quad(5);
        int lineX = v[i][0]+1;
		//Same approach for the horizontal line
		//since we have a separate vector sorted by y
        for(int j = 0; j < n; j++){
            int k = j;
            while(k < n && vert[k][1] == vert[j][1]){
                if(vert[k][0] < lineX){
                    quad[3]++;
                }
                else{
                    quad[4]++;
                }
                k++;
            }
            quad[1] = right - quad[4];
            quad[2] = left - quad[3];
            ans = min(ans, max({quad[1], quad[2], quad[3], quad[4]}));
            j = k - 1;
        }
        i = left-1;
    }
    cout<<ans<<endl;
}
