#include<iostream>
using namespace std;
 
class Base
{
public:
   virtual int fun()  { cout << "Base::fun() called"; }
};
 
class Derived: public Base
{
public:
    int fun() {  cout << "Derived::fun() called"; }
};
 
int main()
{
    Derived d;
   Base *b=&d;
    b->fun();
    return 0;
}
