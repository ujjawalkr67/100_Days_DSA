#include<bits/stdc++.h>
#include<deque>
using namespace std;
//insertion and deletion can be performed in both the end
//not stored in continnous memory .it is dynamic
void explaindeque(){
    deque<int> d;
    d.push_back(1);
    d.push_front(4);
    d.push_front(5);
    d.push_front(8);
    d.push_front(9);
    d.push_back(14);
    d.push_back(10);
    cout<<d.at(1)<<" ";
    cout<<d.front()<<" ";
    cout<<d.back()<<" ";
    cout<<endl;
    for(auto i: d){
        cout<<i <<" ";
    }
    cout<<endl;
    cout<<d.size()<<" ";
    d.pop_back();
    d.pop_front();
    cout<<d.size()<<" ";
    d.erase(d.begin(),d.begin()+2);
    cout<<d.empty()<<" ";
}

int main (){
 explaindeque();
 return 0;

}    