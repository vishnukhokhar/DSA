#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    s.insert(15);
    s.insert(5);
    s.insert(10);
    auto it=s.lower_bound(25);
    if(it!=s.end())

    cout<<*it<<" ";
    else
    cout<<"Given element is greater than the largest element";
}