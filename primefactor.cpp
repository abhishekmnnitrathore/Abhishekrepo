#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int number;
  cin>>number;
  while(number%2 == 0)
  {
    cout<<2<<endl;
    number= number/2;
  } 
  for(int i=3;i<sqrt(number);i=i+2)
   {
     while(number%i==0)
       {
        cout<<i<<endl;
        number= number/i;
       } 
   }
 if(number>2)
  cout<<number<<endl;
return 0;
}
