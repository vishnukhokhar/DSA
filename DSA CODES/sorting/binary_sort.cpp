#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n, int key)
{
    int start=0;
    int end=n;
    
    while(start<end)
    {
        int mid=(start + end)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the no.";
    cin>>n;

    int arr[n];
    cout<<"Enter the arr elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<binarysearch(arr,n,key);
}