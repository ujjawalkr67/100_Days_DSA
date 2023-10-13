//hashing array int
#include<bits/stdc++.h>
using namespace std;
int main (){
int a[5]={1,4,2,7,4};

map<int,int>mpp;
//precompute hash
for(int i=0;i<5;i++)
{
    mpp[a[i]]++;
}

for(auto it:mpp)
{
    cout<<it.first<<" "<<it.second<<endl;
}

}