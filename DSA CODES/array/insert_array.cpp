#include<iostream>
using namespace std;
int insert(int arr[], int n, int x, int cap, int pos)
{
    if(n==cap)
    return n;
    int idx =pos -1;
    for(int i=n-1; i>=idx; i--)
    arr[i+1] = arr[i];
    arr[idx]=x;
    return (n+1);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the number: ";
    cin>>x;

    int pos;
    cout<<"Enter the position: ";
    cin>>pos;
}