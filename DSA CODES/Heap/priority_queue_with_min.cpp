#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(560);
    pq.push(56);
    pq.push(60);
    pq.push(50);

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}