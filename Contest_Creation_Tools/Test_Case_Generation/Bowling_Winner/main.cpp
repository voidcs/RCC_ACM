#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;

int main(){
    srand(time(0));
    vector<array<int, 2>> answers;
    freopen("input.txt", "w", stdout);
    bool invalid = 0;
    int t = rand()%50 + 1;
    cout<<t<<endl;
    while(t--){
        int n = rand()%(int)1e2 + 1;
        int m = rand()%(int)1e2 + 1;
        cout<<n<<" "<<m<<endl;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                a[i][j] = rand()%(int)1e3 + 1;
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        int ans = 0, best = 0;
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < m; j++){
                sum += a[i][j];
            }
            freq[sum]++;
            if(sum > best){
                best = sum;
                ans = i+1;
            }
        }
        if(freq[best] > 1)
            invalid = 1;
        answers.push_back({ans, best});
    }
    freopen("output.txt", "w", stdout);
    if(invalid)
        cout<<"INVALID GAME\n";
    for(auto x: answers)
        cout<<x[0]<<" "<<x[1]<<endl;
    return 0;
}