#include<iostream>
using namespace std;
int main()
{
int i=10;
int &a= i;
float b= (float)a;
cout<<b<<endl;
return 0;
}
