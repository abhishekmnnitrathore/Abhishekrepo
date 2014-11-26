#include<iostream>
using namespace std;
class A
{
    int i;
public:
    A(int ii = 0) : i(ii) {
cout<<"Inside A constructor"<<endl;

}
    void show() {  
cout<<"inside show of A"<<endl;
cout << i << endl;  }
};
 
class B
{
    int x;
public:
    B(int xx) : x(xx) {
cout<<"B constructor"<<endl;

}
//    operator A() const { 
//cout<<"inside operator A()"<<endl;
// return A(x); }
};
 
void g(A a)
{
cout<<"before a.show()"<<endl;
    a.show();
}
 
int main()
{
   cout<<"before B b(10)"<<endl;
    B b(10);
   cout<<"between B b(10) and g(b)"<<endl;
    g(b);
   cout<<"between g(b) and g(20)"<<endl;
    g(20);
   cout<<"after g(20)"<<endl;
    A a=b;
    return 0;
}
