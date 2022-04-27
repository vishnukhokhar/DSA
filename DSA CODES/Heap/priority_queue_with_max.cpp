#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(21);
    pq.push(31);
    pq.push(1);

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
}