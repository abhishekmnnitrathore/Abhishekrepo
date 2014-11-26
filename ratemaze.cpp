#include<iostream>
using namespace std;
int sol1[4][4];
void printsol(int sol[4][4])
{
  for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
         {
            cout<<" "<<sol[i][j];
         }
       cout<<endl;
   }
}

int isSafe(int x,int y,int maze[4][4],int sol[4][4])
{
  if(x>=0 && x<4 && y>=0 && y<4 &&maze[x][y]==1 &&sol[x][y]==0 )
      return 1;
  return 0;
}

int solveRMutlis(int x,int y,int maze[4][4],int sol[4][4])
{
   if(x==3 && y==3)
       {
       sol[3][3]=1;
       printsol(sol);
       cout<<endl;
       return false;
       }
   if(isSafe(x,y,maze,sol))
      {
        sol[x][y]=1;
        if(solveRMutlis(x+1,y,maze,sol)==true)
        return true;
        if(solveRMutlis(x,y+1,maze,sol)==true)
        return true;
        if(solveRMutlis(x-1,y,maze,sol)==true)
        return true;
        if(solveRMutlis(x,y-1,maze,sol)==true)
        return true;

        sol[x][y]=0;
       return false;
      }
  return false;
}

int solveRM(int maze[4][4],int sol[4][4])
{
 for(int i=0;i<4;i++)
    for(int j=0;j<4;j++)
      sol[i][j]=0;
  solveRMutlis(0,0,maze,sol);

}

int main()
{
  int maze[4][4]={ {1, 1, 1, 1},
                   {1, 1, 0, 1},
                   {1, 1, 0, 1},
                   {1, 1, 0, 1}};
  int sol[4][4];
   solveRM(maze,sol);
//if(solveRM(maze,sol)==false)
//  cout<<"solution does not exit";
//else
//cout<<"After Matrix"<<endl;
//printsol(sol);
return 0;
}
