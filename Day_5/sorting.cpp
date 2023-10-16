//hashing array int
#include<bits/stdc++.h>
using namespace std;
void selection(int arr[],int n)
{
 for (int i=0; i<=n-2;i++)
 {
   int mini=i;
   for(int j=i;j<=n-1;j++)
   {
    if(arr[j]<arr[mini])
    {
        mini=j;
    }
   }
   swap(arr[mini],arr[i]);
 }   
}
void merge(int arr[], int low,int mid, int high) {
    vector <int> temp;
    int left =low;
    int right =mid+1;
    while(left <=mid && right <= high)
    {
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }
        while(left <=mid)
    {
            temp.push_back(arr[left]);
            left++;
        
    }
       while(right <=high)
    {
            temp.push_back(arr[right]);
            right++;
    }
    for (int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }

}

void mergeS(int arr[], int low, int high) {
     if(low>=high)
     {
         return;
     }
     int mid=(low+high)/2;
     mergeS(arr,low,mid);
     mergeS(arr,mid+1,high);
     merge(arr,low,mid,high);

}

int main (){
int a[5]={1,4,2,7,4};
selection(a,5);
for(int i=0;i<5;i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
int arr[9]={845,13,24,1,272,73,621,5,9};
mergeS(arr,0,8);
for(int i=0;i<9;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;

}