#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int a=10;
int &b=a;
cout<<"a= "<<a<<" b= "<<b<<endl;
a++;
cout<<"a= "<<a<<" b= "<<b<<endl;
return 0;
}
