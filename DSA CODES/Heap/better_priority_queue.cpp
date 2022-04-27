#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=3;
    int arr[n]={5,15,3};
    for(int i=0;i<n;i++)
    {
        arr[i]=-arr[i];
    }
    priority_queue <int> pq(arr,arr+3);
   while(pq.empty()==false)
   {
       cout<<(-pq.top())<<" ";
       pq.pop();
   }
}