#include<iostream>
#include<string.h>
using namespace std;
int contains(char *str , int index)
{
  if(str[index]=='%' && str[index+1]== '2' && str[index+2] == '0')
   return 1;
  else
   return 0;
}
int main()
{
char str[]= "my name is abhishek singh rathore";
int fast=0,slow=0,flag=0;
while(fast != strlen(str))
{	
   if(!contains(str,fast))
     {
       if(slow !=fast)
        str[slow]=str[fast];	
        slow++;
     }
   else
     {
       if(str[fast]=='%')
        {
          cout<<"space= "<<endl;	
          str[slow]= ' ';
          slow++;
          fast= fast+2;
        }
     }
fast++;
}
cout<<"slow= "<<slow<<endl;
str[slow]= '\0';
cout<<str<<endl;
return 0;
}
