# include<iostream>
using namespace std;
int main()
{
int **a = new int *[10];
for(int i=0;i<10;i++)
   a[i]= new int[5];
for(int i=0;i<10;i++)
{
for(int j=0;j<5;j++)
{
a[i][j]=10;
}
}

for(int i=0;i<10;i++)
{
for(int j=0;j<5;j++)
{
cout<<" "<<a[i][j];
}
cout<<endl;
}
return 0;
}
