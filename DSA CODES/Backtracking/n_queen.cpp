#include<bits/stdc++.h>
using namespace std;
#define n 4

int board[n][n];

void printsol(int board[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }
}

bool isSafe(int row, int col)
{
    for(int i=0;i<col;i++)
    {
        if(board[row][i])
        {
            return false;
        }
    }

    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(board[i][j])
        {
            return false;
        }
    }

    for(int i=row,j=col;i<n && j>=0;i++,j--)
    {
        if(board[i][j])
        {
            return false;
        }
    }
    return true;
}

bool solRec(int col)
{
    if(col==n)
    {
        return true;
    }

    for(int i=0;i<n;i++)
    {
        if(isSafe(i,col))
        {
            board[i][col]=1;

            if(solRec(col+1))
            {
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;

}

bool solve()
{
    if(solRec(0)==false)
    {
        cout<<"No solution";
        return false;
    }
    printsol(board);
    return true;
}

int main()
{
    solve();
    return 0;
}