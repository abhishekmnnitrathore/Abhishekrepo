#include <iostream>
#include <cstring>
using namespace std;
 
// A Dynamic Programming based function to count decodings
int countDecodingDP(char *digits, int n)
{
    int count[n+1]; // A table to store results of subproblems
    count[0] = 1;
 
    for (int i = 1; i <= n; i++)
    {
        if (digits[i-1] < '2' || (digits[i-1] == '2' && digits[i] < '7') )
            {
            
            count[i] = 1+count[i-1];
            cout<<"if::count= "<<count[i]<<endl;
            }
       else
           {
           
           count[i]=count[i-1];
           cout<<"else::count= "<<count[i]<<endl;
           }
    }
    return count[n];
}
 
// Driver program to test above function
int main()
{
    char digits[] = "1234321";
    int n = strlen(digits);
    cout << "Count is " << countDecodingDP(digits, n);
    return 0;
}
