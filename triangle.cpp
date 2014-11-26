#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int Answer= INT_MAX;
int solve(vector<vector<int> > &triangle , int numberofrow , int numberofcolumninrow , int row , int column , int sum )
{
    if(row <0 &&row>= numberofrow && column<0 && numberofcolumninrow>= column)
     return Answer;
    if(numberofrow== row )
    {
       if(Answer>sum)
        Answer= sum;
        return Answer;
    }
    sum= sum+ triangle[row][column];
    solve(triangle, numberofrow, triangle[row].size(), row+1, column , sum);
    solve(triangle, numberofrow, triangle[row].size(), row+1, column+1 , sum);
}

int minimumTotal(vector<vector<int> > &triangle) {
   return solve(triangle , triangle.size() , triangle[0].size(),0,0,0);
        
}

int main()
{
vector<vector<int> > triangle;
int data;
for(int i=0 ;i<4 ;i++)
{
vector<int> row;
   for(int j=0 ;j< i+1;j++)
   {
    cin>>data;
    row.push_back(data);
   }
triangle.push_back(row);
}
for(int i=0 ;i<4 ;i++)
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
