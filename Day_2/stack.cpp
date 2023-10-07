#include<bits/stdc++.h>
#include<stack>
using namespace std;
void explainstack(){
    stack <string> s;
    s.push("ujjawal");
    s.push("kumar");
    s.push("singh");
    cout<<s.top()<<" ";
    s.pop();
    cout<<s.top()<<" ";
    cout<<s.size()<<" "<<s.empty()<<endl;

    //rest of operation same as vector
}

int main (){
 explainstack();
 return 0;

}    