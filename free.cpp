#include<iostream>
using namespace std;
int main()
{
int a=5;
int *q= &a;
int *p=  new int[5];
for(int i=0;i<5;i++)
p[i]=i+5;
cout<<*p<<endl;
delete p;
cout<<*p<<endl;
cout<<*q<<endl;
delete q;
cout<<*q<<endl;
//cout<<*p<<endl;

return 0;
}
