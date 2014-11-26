# include<iostream>
using namespace std;
int isSafe(int x,int y,int sol[8][8])
{
  if(x<8&&x>=0&&y>=0&&y<8&& sol[x][y]==-1)
     true;
  else 
    false;
}
void printsol(int sol[8][8])
{
   for(int i=0;i<8;i++)
     for(int j=0;j<8;j++)
      cout<< sol[i][j];
    cout<<endl;
}
int solveKTutils(int x,int y,int move,int sol[8][8],int *movex,int *movey)
{
int next_x,next_y;
if(move== 8*8)
   return true;

    for(int i=0;i<8;i++)
       {
         next_x= x+movex[i];
         next_y= y+movey[i];
         if(isSafe(next_x,next_y,sol)==true)
           {
             sol[next_x][next_y]=move;
             if(solveKTutils(next_x,next_y,move+1,sol,movex,movey)==true)
                 return true;
             else
                sol[next_x][next_y]=-1;
           }
       }
   return false;
}
void solveKT()
{

int sol[8][8],movex[8]={2, 1, -1, -2, -2, -1,  1,  2},movey[8]={1, 2,  2,  1, -1, -2, -2, -1};
for(int i=0;i<8;i++)
  for(int j=0;j<8;j++)
    sol[i][j]=-1;
sol[0][0]=0;
if(solveKTutils(0,0,1,sol,movex,movey)==false)
    cout<<"solution does not exit";
else
   printsol(sol);

}
int main()
{
solveKT();
return 0;
}
