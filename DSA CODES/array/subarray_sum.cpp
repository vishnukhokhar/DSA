#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

int sum=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
         cin>>a[i];

    }

    for(int i=0; i<n ;i++)
    {
        for (int j=i; j<n; j++)
        {
            sum += a[j];
            cout<<sum<<endl;
        }

    }

    return 0;
}