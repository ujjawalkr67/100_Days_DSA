//priority queue
//it sort in the babsis of priority
#include<bits/stdc++.h>
#include<queue>
using namespace std;
void explainqueue(){
    priority_queue <int> s; //max heap
    s.push(21);
    s.push(42);
    s.push(18);
    s.push(100);
     int n=s.size();
    for(int i=0; i<n ; i++){
        cout<< s.top()<<" ";
        s.pop();
    }
    //maximum element phle ayenge
    cout<<endl;
    cout<<s.empty();
    cout<<endl;

    priority_queue <int ,vector<int>,greater<int>> min; //min heap
    min.push(3);
    min.push(4);
    min.push(2);
    min.push(11);
    int j=min.size();
    for(int i=0; i<j; i++){
        cout<< min.top()<<" ";
        min.pop();
    }
    //mim elemnt phle ayenge
    cout<<endl;
    cout<<min.empty();

    //rest of operation same as vector,queue
}

int main (){
 explainqueue();
 return 0;

}    