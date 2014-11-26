#include<iostream>
using namespace std;
void swap(char *a,char *b){
char temp;
temp = *a;
*a=*b;
*b=temp;
}
void permutation(char *a,int start, int end)
{
int i;
if (start==end)
cout<<a<<endl;
else
{
   for(i=start;i<=end;i++)
    {
      swap((a+start),(a+i));
      permutation(a,start+1,end);
      swap((a+start),(a+i));
    }
}

}
int main()
{
char a[]={'A','B','C'};
permutation(a,0,2);
return 0;
}
