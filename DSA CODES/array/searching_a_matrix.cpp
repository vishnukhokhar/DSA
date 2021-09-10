#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }



cout<<"Matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    bool flag=false;
   
    int x;
    cout<<"Enter the element to find: ";
    cin>>x;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){

            if(arr[i][j]==x)
            {
                cout<<i<<" "<<j<<" "<<endl;
                flag=true;
            }
        }
    }

    if (flag){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element does not exist"<<endl;
    }
}