// A Dynamic Programming solution for Rod cutting problem
#include<stdio.h>
#include<limits.h>
int minindex;
// A utility function to get the maximum of two integers
int min(int a, int b) { return (a < b)? a : b;}
int minarr(int val[],int i)
{
  int min= 123456;
  for(int j=0;j<1;j++)
   {
      if(val[j]<min)
       {
         min= val[j];
         minindex=j;
       }
   }
printf("min= %d minindex= %d\n",min,minindex);
return min;
  
}
 
/* Returns the best obtainable price for a rod of length n and
   price[] as prices of different pieces */
int cutRod(int price[], int n)
{
   int val[n];
   val[0] = price[0];
   for(int i=1;i<n;i++)
    {
     printf("val= %d i= %d\n",val[i],i);
     printf("price= %d minarr(val,i)+val[i-minindex]= %d\n",price[i],minarr(val,i)+val[i-minindex]);
     val[i]= min(price[i],minarr(val,i)+val[i-minindex]);
     printf("val after= %d i= %d\n",val[i],i);
    }
 
   return val[n];
}
 
/* Driver program to test above functions */
int main()
{
    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d\n", cutRod(arr, size));
    getchar();
    return 0;
}
