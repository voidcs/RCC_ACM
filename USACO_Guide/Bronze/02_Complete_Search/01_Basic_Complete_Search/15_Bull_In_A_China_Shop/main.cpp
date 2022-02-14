#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 1e18;
const ll mod = 1e9+7;

int main(){
    freopen("bcs.in", "r", stdin);
    freopen("bcs.out", "w", stdout);
    int n, k;
    cin>>n>>k;
    vector<vector<char>> original(n, vector<char>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>original[i][j];
    vector<vector<array<int, 2>>> pieces;
    for(int i = 0; i < k; i++){
        vector<array<int, 2>> v;
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                char c;
                cin>>c;
                if(c == '#')
                    v.push_back({j, k});
            }
        }
        pieces.push_back(v);
    }

    //Try piece a and b
    //Set the two in a fixed position
    for(int a = 0; a < k; a++){
        for(int b = a+1; b < k; b++){
            for(int ai = 0; ai < n; ai++){
                for(int aj = 0; aj < n; aj++){
                    for(int bi = 0; bi < n; bi++){
                        for(int bj = 0; bj < n; bj++){
                            int dai = pieces[a][0][0] - ai;
                            int daj = pieces[a][0][1] - aj;
                            int dbi = pieces[b][0][0] - bi;
                            int dbj = pieces[b][0][1] - bj;
                            vector<vector<char>> merge(n, vector<char>(n, '.'));
                            auto valid = [&](int x, int y){
                                return x >= 0 && x < n && y >= 0 && y < n && merge[x][y] == '.';
                            };
                            bool ok = 1;
                            vector<array<int, 2>> x = pieces[a];
                            vector<array<int, 2>> y = pieces[b];
                            for(auto p: x){
                                if(valid(p[0]-dai, p[1]-daj)){
                                    merge[p[0]-dai][p[1]-daj] = '#';
                                }
                                else
                                    ok = 0;
                            }
                            for(auto p: y){
                                if(valid(p[0]-dbi, p[1]-dbj)){
                                    merge[p[0]-dbi][p[1]-dbj] = '#';
                                }
                                else
                                    ok = 0;
                            }
                            if(ok && merge == original){
                                cout<<a+1<<" "<<b+1<<endl;
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
