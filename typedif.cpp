# include<iostream>
# include<typeinfo>
using namespace std;
class A{
public:
~ A(){}
};
class B:virtual public A{};
int main()
{
B b1;
A *a = &b1;
//A *a= new B();
B b;
cout<<typeid(*a).name()<<endl;
cout<<typeid(b).name()<<endl;
return 0;
}
