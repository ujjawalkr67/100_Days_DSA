//reverse a array using recursion
#include<bits/stdc++.h>
using namespace std;

void reverse( int a[],int s,int n)
{
    if(s>=n/2){
        return ;
    }
    // int temp=a[s];
    // a[s]=a[n];
    // a[n]=a[temp];
    swap(a[s],a[n-s]);
    reverse(a,s+1,n);
}
int main (){

int a[5]={4,23,4,1,7};
reverse(a,1,5);
for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
}
cout<<endl;

}