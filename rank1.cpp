#include<iostream>
#include<cstring>
using namespace std;
int fact(int n)
{
 if(n<=1)
return 1;
return n*fact(n-1);
}
int smallercount(char *str,int index,int size)
{
 int count=0;
  for(int i= index+1;i<size;i++)
  {
      if(str[index]>str[i])
       count++;
  }
return count;

}

int main()
{

 char str[]= "CBA";
 int count=0,len,sum=0,f;
 len= strlen(str)-1;
 for(int i=0;i<strlen(str)-1;i++)
   {
      count= smallercount(str,i,strlen(str));
      cout<<"count = "<<count<<endl;
      cout<<"len = "<<len<<endl;
      cout<<len<<"!*"<<count<<endl;
      f= fact(len);
      cout<<"fact = "<<f<<endl;
      sum=sum+count*f;
      len--;     
   }
cout<<"Rank = "<<sum+1<<endl;
return 0;
}

