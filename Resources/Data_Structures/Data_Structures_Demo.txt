#include <bits/stdc++.h>
using namespace std;

void selectMap();
void selectSet();
void selectQueue();
void selectPriorityQueue();

int main(){
    int choice = 0;
    while(choice != -1){
        cout<<"Which data structure would you like to explore? \n";
        cout<<"==========================================================================\n"
                "1) Set\n2) Map\n3) Queue\n4) Priority Queue\nEnter -1 to quit\n";
        cin>>choice;
        
        if(choice == 1) selectSet();
        if(choice == 2) selectMap();
        if(choice == 3) selectQueue();
        if(choice == 4) selectPriorityQueue();
    }
 
    return 0;
}


void selectSet(){
    int val = 0;
    int choice = 0;
    set<int> s;
    while(choice != -1){
        cout<<"==========================================================================\n"
                "\nYou are currently reviewing the set\nMake a selection\n\n"
            "1) Insert a value\n2) Delete a value\nEnter -1 to quit\n";
        cin>>choice;
        cout<<endl;

        
        if(choice == 1){
            cout<<"Enter a value to insert\n";
            cin>>val;
            s.insert(val);
        }
        
        if(choice == 2){
            cout<<"Enter a value to delete\n";
            cin>>val;
            s.erase(val);
        }
        
        //Can also use s.empty()
        if(s.size() == 0)
            cout<<"\nThe set is empty!\n";
        else{
            cout<<"\nThe contents of the set: \n";
        }
        set<int>::iterator it;
        for(it = s.begin(); it != s.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        if(choice != -1){
            cout<<"\nPress enter to continue: "<<endl;
            cin.ignore();
            cin.get();
        }
    }
}
void selectMap(){
    string val;
    int set = 0;
    int choice = 0;
    map<string, int> m;
    while(choice != -1){
        cout<<"==========================================================================\n"
                "\nYou are currently reviewing the map\nMake a selection\n\n"
            "1) Add a value\n2) Set a value to key\n3) Delete a value\n4) Check value (correct)\n"
                "5) Check value (incorrect)\nEnter -1 to quit\n";
        cin>>choice;
        cout<<endl;
        
        if(choice == 1){
            cout<<"Enter a value to insert: \n";
            cin>>val;
            m[val]++;
        }
        
        if(choice == 2){
            cout<<"Enter the key: \n";
            cin>>val;
            cout<<"What do you want to set it to?\n";
            cin>>set;
            m[val] = set;
        }
        
        if(choice == 3){
            cout<<"Enter the key to delete\n";
            cin>>val;
            m.erase(val);
        }
        
        if(choice == 4){
            cout<<"Enter the key\n";
            cin>>val;
            if(m.count(val))
                cout<<m[val]<<endl;
            else
                cout<<"Element is not in the map\n";
        }
        
        if(choice == 5){
            cout<<"Enter the key\n";
            cin>>val;
            cout<<m[val]<<endl;
        }
        
        if(m.size() == 0)
            cout<<"\nThe map is empty!\n";
        else
            cout<<"\nThe contents of the map: \n";
        map<string, int>::iterator it;
        for(it = m.begin(); it != m.end(); it++){
            cout<<it->first<<"    "<<it->second<<endl;
        }

//            This is what I realistically use
//            for(auto x: m){
//                cout<<x.first<<"    "<<x.second<<endl;
//            }
        if(choice != -1){
            cout<<"\nPress enter to continue: "<<endl;
            cin.ignore();
            cin.get();
        }
    } 

}

void selectQueue(){
    int val = 0;
    int choice = 0;
    queue<int> q;
    while(choice != -1){
        cout<<"==========================================================================\n"
                "\nYou are currently reviewing the queue\nMake a selection\n\n"
            "1) Push a value\n2) Get front of queue\n3) Pop front value\nEnter -1 to quit\n";
        cin>>choice;
        cout<<endl;
        
        if(choice == 1){
            cout<<"Enter a value to insert: \n";
            cin>>val;
            q.push(val);
        }
        
        if(choice == 2){
            cout<<"The element at the front is: "<<q.front()<<endl;
        }
        
        if(choice == 3){
            q.pop();
        }

        if(q.size() == 0)
            cout<<"\nThe queue is empty!\n";
        else{
            cout<<"\nThe contents of the queue: ";
        }
        queue<int> it = q;
        while(!it.empty()){
            cout<<it.front()<<" ";
            it.pop();
        }
        cout<<endl;
        if(choice != -1){
            cout<<"\nPress enter to continue: "<<endl;
            cin.ignore();
            cin.get();
        }
    }
}

void selectPriorityQueue(){
    int val = 0;
    int choice = 0;
    priority_queue<int> q;
    while(choice != -1){
        cout<<"==========================================================================\n"
                "\nYou are currently reviewing the priority queue\nMake a selection\n\n"
            "1) Push a value\n2) Get front of priority queue\n3) Pop front value\nEnter -1 to quit\n";
        cin>>choice;
        cout<<endl;

        if(choice == 1){
            cout<<"Enter a value to insert: \n";
            cin>>val;
            q.push(val);
        }
        
        if(choice == 2){
            cout<<"The element at the front is: "<<q.top()<<endl;
        }
        
        if(choice == 3){
            q.pop();
        }
        
        if(q.size() == 0)
            cout<<"\nThe priority queue is empty!\n";
        else{
            cout<<"\nThe contents of the priority queue: ";
        }
        auto it = q;
        while(!it.empty()){
            cout<<it.top()<<" ";
            it.pop();
        }
        cout<<endl;   
        if(choice != -1){
            cout<<"\nPress enter to continue: "<<endl;
            cin.ignore();
            cin.get();
        }
    }
}