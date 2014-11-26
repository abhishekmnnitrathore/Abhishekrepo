#include<iostream>
using namespace std;
void printsol(int board[4][4])
{
   for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
       {
         cout<<" "<<board[i][j];
       }
    cout<<endl;
    }
}

int isSafe(int board[4][4],int row,int col)
{
  int i,j;
   for( i=0;i<col;i++)
     {
       if(board[row][i]==1)
         return false;
     }
   for( i=row, j=col;i>=0&&j>=0;i--,j--)
    {
     if(board[i][j]==1)
         return false;
    }
   for( i=row, j=col;i<=3&&j>=0;i++,j--)
    {
      if(board[i][j]==1)
         return false;

    }
   return true;
}

int solveNQutlis(int board[4][4],int col)
{
 if(col>=4)
return true;
for(int i=0;i<4;i++)
  {
     if(isSafe(board,i,col))
     {
       board[i][col]=1;
       if(solveNQutlis(board,col+1)==true)
        true;
       board[i][col]=0;
     }
  }
return false;
}

int solveNQ()
{
int board[4][4];
for(int i=0;i<4;i++)
   for(int j=0;j<4;j++)
    board[i][j]=0;
if(solveNQutlis(board,0)==false)
cout<<"does not exit";
else
printsol(board);
}

int main()
{
solveNQ();
return 0;
}
