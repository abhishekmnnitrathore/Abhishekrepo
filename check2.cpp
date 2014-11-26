#include<iostream>
using namespace std;
class base{
public: 
int a;
int m;
  base(){}
 void fun()
  {
   cout<<"base class"<<endl;
   }
};
class A:virtual public base{
public:
int b;
int k;
 A(){}
 void fun()
{
cout<<"class A"<<endl;
}
};


class B: virtual public A{

public:
int c; 
 B(){}
//void fun()
//{
//cout<<"class B"<<endl;
//}
};
int main()
{
 //B b;
//b.fun();
cout<<sizeof(base)<<endl;
cout<<sizeof(A)<<endl;
cout<<sizeof(B)<<endl;

}
