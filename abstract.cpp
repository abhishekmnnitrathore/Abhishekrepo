#include<iostream>
#include<string.h>
using namespace std;

class A
{
public:
virtual void func()=0;

virtual void func1()
{
cout<<"func1"<<endl;
}

void func2()
{
cout<<"func2"<<endl;
}

};
class B:public A
{
public:
void func()
{
cout<<"func"<<endl;
}

void func1()
{
cout<<"func1 B"<<endl;
}

void func2()
{
cout<<"func2 "<<endl;
}
};
int main()
{
A *a= new B();
B b;
a->func();
a->func1();
a->func2();
b.func2();
//delete b;
delete a;
return 0;
}
