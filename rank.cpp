#include<iostream>
#include<cstring>
using namespace std;
void swap(char *x , char *y)
{
  char temp;
  temp =*x;
  *x=*y;
  *y= temp;
}
void permutation(char *str, int i ,int n)
{
   int j;
   if(i==n)
   cout<<str<<endl;
   for(j=i;j<n;j++)
  {
    swap(str+i ,str+j);
    permutation(str,i+1,n);
    swap(str+i,str+j);
  }

}
int main()
{

 char str[] = "ABC";
 permutation(str,0,strlen(str));
 return 0;
}
