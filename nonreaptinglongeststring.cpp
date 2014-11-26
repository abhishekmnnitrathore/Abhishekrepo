# include <iostream>
# include <cstring>
using namespace std;
int check(char *str ,int start, int end)
{
cout<<"start ="<<start<<"end= "<<end<<endl;
int i= start,j=start,count=0;
int *arr = new int[end-start+1];
while(i<=end){
arr[str[i]]=0;
i++;
}
i=0;
while(i<=end){
arr[str[i]]++;
i++;
}
while(j<=end){
count= count+arr[str[j]];
j++;
}
delete arr;
cout<<"count ="<<count<<endl;
if(count==end-start+1)
return 1;
else
return 0;
}
int countlength(char *str, int start,int end, int len)
{
if((start<0 || end>len)||(start>end))
return 0;
if(check(str, start, end))
{
return len-start+1;
}
countlength(str, start+1,end, len)||countlength(str, start,end-1,len);

}

int main()
{
char str[]= "ABDEFGABEF";
int len =0 ;
while(str[len]!= '\0')
{
len++;
}
int answer= countlength(str,0, len-1, len);
cout<<"answer= "<<answer<<endl;
return 0;
}
