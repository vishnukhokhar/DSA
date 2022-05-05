#include<bits/stdc++.h>
using namespace std;
#define n 4
bool solveMazeRec(int maze[n][n],int i,int j,int sol[n][n]);

void printsol(int sol[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j];
        }
        cout<<endl;
    }
}

bool isSafe(int maze[n][n],int i,int j)
{
    return(i<n && j<n && maze[i][j]==1);
}

bool solveMaze(int maze[n][n])
{
    int sol[n][n]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};

    if(solveMazeRec(maze,0,0,sol)==false)
    {
        cout<<"Solution does not exist";
        return false;
    }
    printsol(sol);
    return true;
}

bool solveMazeRec(int maze[n][n],int i,int j,int sol[n][n])
{
   if(i==n-1  && j==n-1 && maze[i][j]==1)
   {
       sol[i][j]=1;
       return true;
   }

   if(isSafe(maze,i,j)==true)
   {
       sol[i][j]=1;

       if(solveMazeRec(maze,i+1,j,sol)==true)
       {
           return true;
       }
       if(solveMazeRec(maze,i,j+1,sol)==true)
       {
           return true;
       }
       sol[i][j]=0;
   }
   return false;
}

int main() {
	
	int maze[n][n] = { { 1, 0, 0, 0 }, 
                       { 1, 1, 0, 1 }, 
                       { 0, 1, 0, 0 }, 
                       { 1, 1, 1, 1 } }; 
  
    solveMaze(maze);    
    return 0;  
	
}