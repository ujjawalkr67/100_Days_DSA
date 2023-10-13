//hashing array char
#include<bits/stdc++.h>
using namespace std;
int main (){
string s="acdfesfaae";

//precompute hash
int hassh[26]={0}; //26 for alphabet only if ther are other char then we have to take 256 size
for(int i=0;i<s.size();i++)
{
    hassh[s[i]-'a']++; // if we use 256 char value then we can directly write s[i] without sub tracting the 'a'
}

for(int i=0;i<s.size();i++)
{
    cout << s[i]<<" "<<hassh[s[i]-'a']<<endl;
}

}