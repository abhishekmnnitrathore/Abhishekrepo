# include<iostream>
using namespace std;
template<class T>
T myfun(const T &data1, const T &data2)
{
 cout<<data1<<endl;
 cout<<data2<<endl;

}
int main()
{
int i=10;
float j=10.2;
 myfun<float>(i,j);
}
