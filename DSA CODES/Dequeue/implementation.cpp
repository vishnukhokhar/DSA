#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> dq={1,2,3};
    dq.push_front(20);
    dq.push_front(30);
    dq.push_back(50);

    for(auto x:dq)
    {
        cout<<x<<" ";
    }

    cout<<"\n"<<"front is: "<<dq.front()<<endl;

    auto it=dq.begin();
    it++;

    dq.push_front(69);
    cout<<"\n"<<"front is: "<<dq.front()<<endl;

    dq.pop_front();
    cout<<"\n"<<"front is: "<<dq.front()<<endl;
    
    cout<<"\n"<<"Back is: "<<dq.back()<<endl;
    dq.pop_back();
    cout<<"\n"<<"Back is: "<<dq.back()<<endl;


}