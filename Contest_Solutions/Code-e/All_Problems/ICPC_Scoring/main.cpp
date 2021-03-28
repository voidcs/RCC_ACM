#include <bits/stdc++.h>
using namespace std;
struct Team{
    string name;
    int solved;
    int penalty;
};

bool comp(Team a, Team b){
    if(a.solved != b.solved)
        return a.solved > b.solved;
    if(a.penalty != b.penalty)
        return a.penalty < b.penalty;
    return a.name < b.name;
}

int main(){
    int n;
    cin>>n;
    Team teams[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, teams[i].name);
        cin>>teams[i].solved>>teams[i].penalty;
    }

    sort(teams, teams + n, comp);
    for(int i = 0; i < n; i++)
        cout<<teams[i].name<<endl;
    return 0;
}