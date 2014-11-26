#include<iostream>
#include<vector>
#include<string>
using namespace std;
void fillvector(vector<bike>& myvector)
{
 string color;
 int type;
 cout<<"Enter number of bikes"
 cin>>number;
  for(int i=0; i<number;i++)
{
  cout<<"Enter bike color"
  cin>>color;
  cout<<"Enter type of bike"
  cin>>types;
 bike mybike(color,type);
}
}
void printvector()
{
  cout<<;
}
class bike{
public:
string newcolor;
int newtype;
bike(string color,int type)
{
  newcolor= color;
  newtype= type;
}
string getcolor()
{
return newcolor;
}
int gettype()
{
return newtype;
}
};
int main()
{
vector<bike>myvector;
fillvector(myvector);
printvector(myvector);
return 0;
}

