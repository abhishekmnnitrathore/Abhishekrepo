#include<iostream>
using namespace std;

template<class T=int>
 class myclass{
   T x,y,z;  
 public:
   myclass(T a, T b)
   { x=a; y =b; }
   T getvalue();
};

template<class T>
T myclass<T>::getvalue()
 {
   z= x+y;
  return z;
 }


int main()
{
myclass<> obj(10,5);
cout<<obj.getvalue();
return 0;
}

