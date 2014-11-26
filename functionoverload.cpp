#include<iostream>
using namespace std;
 
class Point {
private:
  int x, y;
public:
  Point(int a,int b) : x(a), y(b) {cout<<"point constructor::x= "<<x<<" y= "<<y<<endl; }
//  Point& operator()(int dx, int dy);
  void show() {cout << "x = " << x << ", y = " << y; }
};
 
//Point& Point::operator()(int dx, int dy)
//{
//cout<<"operator::dx= "<<dx<<" dy= "<<dy<<endl;

  //  x = dx;
   // y = dy;
   // return *this;
//}
 
int main()
{
  Point pt(6,7);
  pt(3, 2);
  pt.show();
  return 0;
}
