//set stores only unique elemnt 
// sorted order
// behind the scene implemented using bst
#include<bits/stdc++.h>
#include<set>
using namespace std;
void explainSet(){
    set <int> s;
    s.insert(5);
    s.insert(6);
    s.insert(5);//it will not stored as set has 5 no dubplicate
    s.insert(3);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(2);
    s.insert(1);


    for(auto i: s){
        cout<<i<<" "; //sorted order output
    }
    cout<<endl;
    set<int>::iterator it =s.begin();
    it++; //it will point ot next memomry location
    s.erase(it);

    for(auto i: s){
        cout<<i<<" "; //sorted order output
    }
    cout<<endl;
    cout<<s.count(5)<<" ";
    cout<<s.count(6)<<" ";
    cout<<endl;

    set<int>::iterator its =s.find(7); //retrun the iterator reference 
    for(auto it =its;it!= s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //rest of operation same as vector
}

int main (){
 explainSet();
 return 0;

}    