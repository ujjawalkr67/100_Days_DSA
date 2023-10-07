//map is akey value pair
#include<bits/stdc++.h>
#include<map>
using namespace std;
void explainMap(){
    map <int,string> m;
    m[1]="ujjawal";
    m[4]="kumar";
    m[3]="singh";
    m.insert({6,"bheem"});
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<" "<<endl; // print in sorted key value
    }
    m.erase(4);//delete the 4th key and its value


    //rest of operation same as vector
}

int main (){
 explainMap();
 return 0;

}    