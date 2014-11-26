#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<vector<int> > &triangle, vector<vector<int> > &path ,int Answer )
{
  path[0][0]= triangle[0][0];
  for(int i=1;i< triangle.size();i++)
   {
      path[i][0]=path[i-1][0]+triangle[i][0];
   }
  for(int i=1;i< triangle.size();i++)
   {
      path[i][triangle[i].size()-1]=path[i-1][triangle[i].size()-2]+triangle[i][triangle[i].size()-1];
   }
  for(int i=2;i< triangle.size();i++)
   {
       for(int j=1;j< triangle[i].size()-1;j++)
        {
            path[i][j]=min(path[i-1][j-1],path[i-1][j])+triangle[i][j];
        }
   }
  for(int i=0;i<path[path.size()-1].size();i++)
   {
      if(Answer>path[path.size()-1][i])
        Answer= path[path.size()-1][i];
   }
return Answer;	
}

int minimumTotal(vector<vector<int> > &triangle) {
  vector<vector<int> > path;
  int Answer= INT_MAX;
    for(int i=0 ;i<triangle.size() ;i++)
    {
     vector<int> row;
     for(int j=0 ;j< i+1;j++)
      {
        row.push_back(-1);
      }
     path.push_back(row);
   }
   for(int i=0 ;i<triangle.size() ;i++)
    {
     for(int j=0 ;j< path[i].size();j++)
      {
       cout<<" "<<path[i][j];
      }
    cout<<endl;
    }
   return solve(triangle,path,Answer);
        
}

int main()
{
vector<vector<int> > triangle;
int data;
for(int i=0 ;i<2 ;i++)
{
vector<int> row;
   for(int j=0 ;j< i+1;j++)
   {
    cin>>data;
    row.push_back(data);
   }
triangle.push_back(row);
}
for(int i=0 ;i<2 ;i++)
{
   for(int j=0 ;j< triangle[i].size();j++)
   {
    cout<<" "<<triangle[i][j];
   }
cout<<endl;
}
cout<<"Answer= "<<minimumTotal(triangle);
return 0;
}
