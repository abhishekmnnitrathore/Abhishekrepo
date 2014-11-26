#include <iostream>
using namespace std;
#define MAX 100000
 
void printPairs(int arr[], int arr_size, int sum)
{
  int  temp;
  bool binMap[MAX] = {0}; /*initialize hash map as 0*/
 
  for(int i = 0; i < arr_size; i++)
  {
    temp = sum - arr[i];
    cout<<"sum = "<<sum<<" arr = "<<arr[i]<<" temp = "<<temp<<" binMap_temp = "<<binMap[temp]<<endl;
    if(temp >= 0 && binMap[temp] == 1)
    {
    //  printf("Pair with given sum %d is (%d, %d) \n", sum, arr[i], temp);
      cout<<"sum = "<<sum<<" arr = "<<arr[i]<<" temp = "<<temp<<endl;
    }
    binMap[arr[i]] = 1;
    cout<<"arr = "<<arr[i]<<" binMap_arr = "<<binMap[arr[i]]<<endl;
  }
}
 
/* Driver program to test above function */
int main()
{
    int A[] = {6, 4, 45, 1, 10, 8};
    int n = 16;
    int arr_size = 6;
 
    printPairs(A, arr_size, n);
 
    return 0;
}




