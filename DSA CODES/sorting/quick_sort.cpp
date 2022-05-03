#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[], int l, int r)
{
    int pivot=arr[r];
    int i=l-1;

    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }   
    }
    swap(arr,i+1,r);
    return i+1;
}
int quick_sort(int arr[],int l, int r)
{
    if(l<r)
    {
    int pi=partition(arr,l,r);

    quick_sort(arr,l,pi-1);
    quick_sort(arr,pi+1,r);
}
}
int main()
{
    int arr[]={5,90,25,100,35,45,80};
    quick_sort(arr,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}