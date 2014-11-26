#include<iostream>
#include<algorithm>
using namespace std;
int arr[]={1,2,3,5};
int size= sizeof(arr)/sizeof(arr[0]);
int *arr_temp= new int[size];
int min()
{
    int m= 7654428;
   for(int i=0;i<size;i++)
    {
      if(arr_temp[i]<m&&arr_temp[i])
      {
        m= arr_temp[i];
       
      }
    }
   for(int i=0;i<size;i++)
   {
       if(arr_temp[i]==m)
         {
           arr_temp[i]=0;
         }
   }
cout<<"min function:: min = "<<m<<endl;
return m;
}
int check(int *arr,int min)
{
    int sum=0;
    for(int i=0;i<size;i++)
      {
       sum=sum+ arr[i];
      }
    if((sum-min)%3==0)
{
 cout<<"return one"<<endl;
    return 1;
}
    else
{
 cout<<"return zero"<<endl; 
   return 0;
}
}
int main()
{
  int m,Answer=0,count=0;
  for(int i=0;i<size;i++)
    arr_temp[i]=arr[i];

while(!check(arr,0))
{
   m= min();
   count++;
   cout<<"Main m= "<<m<<endl; 
  if(check(arr,m)|| count==size)
     break;
}
if(count==size)
cout<<"solution not possible"<<endl;
else
{
sort(arr,(arr+size));
for(int i=size-1;i>=0;i--)
{
 if(arr[i]!=m)
  Answer= Answer*10+arr[i];
}
cout<<"Answer = "<<Answer<<endl;
}
return 0;
}
