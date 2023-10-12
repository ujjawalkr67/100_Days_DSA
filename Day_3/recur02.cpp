//palindrom in string
#include<bits/stdc++.h>
using namespace std;

bool pallindrom( string &s,int i)
{
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!= s[s.size()-i-1]){
        return false;
    }
   return pallindrom(s,i+1);
}
int main (){

string a="madam";
cout<<pallindrom(a,0)<<endl;

string an="maddd";
cout<<pallindrom(an,0)<<endl;

}