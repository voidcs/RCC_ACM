#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n, find;
    cin>>n>>find;
    int a[n];
    for(int i = 0; i < n; i++)
        cin>>a[i];
    
    int l = 0, r = n-1;
    int index = -1;
    while(l <= r){
        int mid = (l + r) / 2;
        cout<<"mid: "<<mid<<"   l: "<<l<<"   r: "<<r<<"   a[mid]: "<<a[mid]<<endl;
        if(a[mid] == find){
            index = mid;
            break;
        }
        else if(a[mid] < find){
            cout<<"Current value too small, look right\n\n";
            l = mid + 1;
        }
        else{
            cout<<"Current value too large, look left\n\n";
            r = mid - 1;   
        }
    }
    if(index == -1)
        cout<<find<<" does not exist in this array\n";
    else
        cout<<find<<" was found at index "<<index<<endl;
    
    return 0;
}