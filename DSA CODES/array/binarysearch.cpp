#include<iostream>
using namespace std;
int binary_serach(int arr[],int n,int key){

    int s=0;
    int e=n;
    while(s<=n)
    {

        int mid=(s+e)/n;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]>key)
        {
             e=mid-1;
        }

        else
        {
             s=mid+1;
        }

    }

    return -1;
}
int main()
{
    int n;
    cout<<"n"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Key"<<endl;
    cin>>key;

    cout<<binary_serach(arr,n,key)<<endl;
}