//hashing
#include<bits/stdc++.h>
using namespace std;
int main (){
int a[5]={1,4,2,7,4};

//precompute hash
int hassh[12]={0};
for(int i=0;i<5;i++)
{
    hassh[a[i]] += 1;
}

for(int i=0;i<5;i++)
{
    cout << a[i]<<" "<<hassh[a[i]]<<endl;;
}

}