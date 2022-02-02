#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
const ll INF = 1e18;

struct cow{
    ll x, y, id;
    char dir;
};

int main(){
    int n;
    cin>>n;
    vector<cow> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i].dir>>v[i].x>>v[i].y;
        v[i].id = i;
    }
    vector<array<int, 2>> intersection;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(v[i].dir == v[j].dir)
                continue;
            int a = i, b = j;
            if(v[a].dir == 'E')
                swap(a, b);
            if(v[a].y < v[b].y && v[a].x > v[b].x)
                intersection.push_back({a, b});
        }
    }
    auto comp = [&](array<int, 2> a, array<int, 2> b){
        int distA = max(v[a[0]].x - v[a[1]].x, v[a[1]].y - v[a[0]].y);
        int distB = max(v[b[0]].x - v[b[1]].x, v[b[1]].y - v[b[0]].y);
        return distA < distB;
    };
    sort(intersection.begin(), intersection.end(), comp);
    const int inf = 2e9;
    vector<int> dist(n, 2e9);
    for(int i = 0; i < (int)intersection.size(); i++){
        int a = intersection[i][0];
        int b = intersection[i][1];
        //Both stopped
        if(dist[a] != inf && dist[b] != inf)
            continue;
        //Neither are stopped
        if(dist[a] == inf && dist[b] == inf){
            int meetX = v[a].x;
            int meetY = v[b].y;
            if(meetY - v[a].y < meetX - v[b].x)
                dist[b] = meetX - v[b].x;
            else if(meetY - v[a].y > meetX - v[b].x)
                dist[a] = meetY - v[a].y;
        }
        else{
            if(dist[a] != inf){
                //a is stopped but b isn't
                if(v[a].y + dist[a] >= v[b].y)
                    dist[b] = v[a].x - v[b].x;
            }
            else if(dist[b] != inf){
                //b is stopped but a isn't
                if(v[b].x + dist[b] >= v[a].x)
                    dist[a] = v[b].y - v[a].y;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(dist[i] == inf)
            cout<<"Infinity\n";
        else
            cout<<dist[i]<<endl;
    }
    return 0;
}
