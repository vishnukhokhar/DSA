#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=12;
    int arr[] = { 11, 3, 2, 1, 15, 5, 4, 45, 88, 96, 50, 45 };
    priority_queue<int> pq(arr,arr+13);
    int k=3;
    for(int i=0;i<k;i++)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

}