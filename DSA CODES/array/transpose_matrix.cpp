#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    int transpose[n][m];
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }


    cout<<"Transpose matrix is: "<<endl;

    for(int i=0; i<n; i++)
    {
        for(int j=0 ; j<m; j++)
        {
            cout<<transpose[i][j]<<" ";
        }

        cout<<endl;
    }
}