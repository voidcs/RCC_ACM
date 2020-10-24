#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    srand(time(0));
    vector<int> answers;
    freopen("output.txt", "w", stdout);

    int n = rand() % 20 + 1;
    cout<<n<<endl;
    vector<int> v;
    int l = rand() % n;
    int r = rand() % (n-l);
    r += l;
    cout<<l+1<<" "<<r+1<<endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int num = rand() % 1000 + 1;
        v.push_back(num);
        if(i >= l && i <= r)
            sum += num;
    }
    for(auto x: v){
        cout<<x<<" ";
    }
    cout<<endl;
    answers.push_back(sum);
    

    freopen("answers.txt", "w", stdout);
    for(auto x: answers){
        cout<<x;
    }
    
    return 0;
}