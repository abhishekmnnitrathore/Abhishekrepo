# include<stdio.h>
void munna(int &p)
{
  printf("value of p=",p);
}
int main()
{
  int a=10;
  int &p=a;
 munna(p);
 return 0;
}

