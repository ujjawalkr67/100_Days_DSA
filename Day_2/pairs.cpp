#include<bits/stdc++.h>
using namespace std;

//pairs
// pairs defines in the utility library it can be treated ass data type
void explainPair(){
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> q ={1,{3,4}};
    // we can add more than one pair like this 
    cout<<p.first <<" "<<q.second.second<<" "<<q.second.first;

    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    //array stored as pair 
    cout<<arr[1].second;
}

int main (){
 explainPair();
 return 0;

}