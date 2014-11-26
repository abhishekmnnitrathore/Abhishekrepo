#include<iostream>
using namespace std;
int fun(int *arr ,int i,int n)
{
int j;
 if(i==n)
   {
     for(int i=0;i<n;i++)
     cout<<arr[i];
     cout<<endl;
    return 1;
   }
 for(j=i;j<n;j++)
  fun(arr,i+1,n);
}
int main()
{
 int arr[]={1,2,3,4};
 int size= sizeof(arr)/sizeof(arr[0]);
 fun(arr,0,size);

}
