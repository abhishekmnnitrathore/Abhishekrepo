#include<iostream>
using namespace std;
int size,count=0,index=0;
int *data;
int check(int *temp_arr,int temp_num)
{
  for(int i=0;i<1000;i++)
    {
      if(temp_arr[i]==temp_num)
      {
        return 0;
      }
    
    }
return 1;
}
int isSafe( int sum ,int sum_arr)
{
  if(sum<=sum_arr)
     return 1;
  return 0;
}
int sumfun(int *arr,int i, int sum, int sum_arr,int index)
{
 int k;
 if(sum==sum_arr)
  {
    int temp_num=0,temp_arr[1000];
    for(int j=0;j<i;j++){
    //cout<<data[j]<<"";
     temp_num= temp_num*10+data[j];
    } 
    cout<<"temp_num= "<<temp_num<<endl;
    if(check(temp_arr,temp_num))
     {
      temp_arr[index]= temp_num;
      index++;
      count ++;
     }
  return 0;
  }
    for(k=i;k<size;k++)
     {
           data[index]=arr[k]; 
           sum= sum+data[index];

        if(isSafe(sum,sum_arr)){      
           if(sumfun(arr,i+1,sum,sum_arr,index+1)==1)
       	   return 1;
	sum-=data[index];
           data[index]=0;
       }
     }

return  0;
}
 int main()
{
 int arr[]={1,1,1,1,2,2,3};
 size= sizeof(arr)/sizeof(arr[0]);
 data= new int[size];
 sumfun(arr,0,0,4,0);
 cout<<"count = "<<count<<endl;
}
