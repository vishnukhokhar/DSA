#include<bits/stdc++.h>
using namespace std;

void previous_smaller(int arr[],int n)
{
    stack<int> s;
    s.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && s.top()>arr[i])
        {
            s.pop();
        }

        int ps=s.empty()?-1:s.top();
        cout<<ps<<" ";
        s.push(arr[i]);
    }

}

int main()
{
    int arr[]={2, 5, 3, 7, 8, 1, 9};
    int n=7;
    previous_smaller(arr,n);
}