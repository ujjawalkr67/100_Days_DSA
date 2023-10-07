#include<bits/stdc++.h>
#include<queue>
using namespace std;
void explainqueue(){
    queue <string> s;
    s.push("ujjawal");
    s.push("kumar");
    s.push("singh");
    cout<<s.front()<<" ";
    s.pop();
    cout<<s.front()<<" ";
    cout<<s.size()<<" "<<s.empty()<<endl;

    //rest of operation same as vector
}

int main (){
 explainqueue();
 return 0;

}    