#include<iostream>
using namespace std;
# define E 11
# define V 12
int adj_matrix[12][12],visited[12],n;
void dfs()
{


}

int main()
{
int E1[11]={1,1,1,2,2,3,3,8,8,9,9},E2[11]={2,7,8,6,3,4,5,9,12,10,11};
for(int i=0;i<V;i++)
{
   for(int j=0;j<V;j++)
    {
       adj_matrix[i][j]=0;
    }
}
for(int i=0;i<E;i++)
{
   for(int j=0;j<E;j++)
    {
       adj_matrix[E1[i]-1][E2[j]-1]=1;
    }
}

for(int i=0;i<V;i++)
{
   for(int j=0;j<V;j++)
    {
       cout<<" "<<adj_matrix[i][j];
    }
    cout<<endl;
}
}
