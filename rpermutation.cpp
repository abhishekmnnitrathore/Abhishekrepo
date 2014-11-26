#include<iostream>
using namespace std;
int *data;
int permutation(int *arr , int r , int size, int i, int index)
{
 int j;
     if(index==r)
      {
        for(int k=0;k<index;k++)
         {
          cout<<data[k]<<"";
         }
    cout<<endl;
    return 1;
     }
     for(j=i;j<size;j++)
      {
       data[index]=arr[j];
      // cout<<"Before:: index= "<<index<<" j= "<<j<< " data= "<<data[index]<<" arr= "<<arr[j]<<endl;
       permutation(arr,r,size,j+1,index+1);
      // cout<<"After:: index= "<<index<<" j= "<<j<<endl;

      }

}
int main()
{
int arr[]={1,2,3,4,5,},r=3;
data = new int[r];
int size= sizeof(arr)/sizeof(arr[0]);
permutation(arr,r,size,0,0);
return 0;
}
