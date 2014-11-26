#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
 int T;
 cin>>T;
for(int i=0;i<T;i++)
{
  int size,sum,Answer=1,temp_j,temp_k,count=INT_MAX;
  cin>>size;
  cin>>sum;
  int *arr = new int[size];
  int *temp= new int[size];
  for(int j=0;j<size;j++)
   cin>>arr[j];
   temp[0]=arr[0];
  for(int j=1;j<size;j++)
   temp[j]=temp[j-1]+arr[j];
  for(int j=0;j<size;j++)
  {
    for(int k=j+1;k<size;k++)
     {
       cout<<"temp j = "<<temp[j]<<" temp k ="<<temp[k]<<endl;
       if(temp[j]+sum<temp[k])
        {
        cout<<"count = "<<count<<" k-j = "<<k-j<<endl;
         if(count>k-j)
         {
         count= k-j;
         temp_j=j;
         temp_k=k;
        cout<<"temp_j= "<<temp_j<<" temp_k ="<<temp_k<<endl;
         } 
        }
     }
  }
cout<<temp_k-temp_j;
}
}
