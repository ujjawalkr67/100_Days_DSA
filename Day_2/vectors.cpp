#include<bits/stdc++.h>
#include<vector>
using namespace std;

void explainVector(){
    vector <int> v3;

    v3.push_back(1);
    vector<pair<int,int>> vec; 
    //this atype of pair vector which will take pair input
    vec.push_back({1,2});

    vector <int> v4(5,100);

    vector<int> v5(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);
    // ---------------------------------------------
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    //iterators in stl 
    // iterators point sto memory location of the element
    vector<int>::iterator it =v.begin();
    //"it" can be any anme or variable name
    //v.begin means it is pointing to the memory address of the fisrt ement of v vector
    it++;
    cout<< *(it)<<" ";
    //*[it] will give the element stored in the address 
    it= it+2;
    cout<<*(it)<<" ";
    //more kind of iterators other than begin()
    vector<int>::iterator itt =v.end();
    //this will not point to the last element but it will point
    // to the next momory address of last element we have to do "it--" to get the last elemnt 
    // vector<int>::iterator it =v.rend();
    // vector<int>::iterator it =v.rbegin();
    // these two are not use much so not imp.

    cout<< v[0]<<" "<<v.at(0)<<" ";
    cout<<v.back()<<" ";

    //print the vector
    for(vector<int>::iterator it =v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
     for(auto it =v.begin(); it != v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
     for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1);
    //erase function takes location of element
    v.erase(v.begin()+2,v.begin()+4) ;//[start,end) end elemnt is not deleted we have to give ine extra element memory

    //insertion in vector
    vector<int> ve(2,100);//{100,100}
    ve.insert(v.begin(),300); //{300,100,100}
    ve.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int> copy(2,50);//{50,50}
    ve.insert(ve.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}


    cout<<ve.size()<<endl;
    //ve.pop_back();
    //v1->{10,20}
    //v2->{30,40}
    //v1.swap(v2) ;// v1->{30,40} v2->{10,20}
    ve.clear(); //erase the entire vector
    cout<<ve.empty();

}

int main (){
 explainVector();
 return 0;

}