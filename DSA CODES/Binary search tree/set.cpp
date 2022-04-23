#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    s.insert(15);
    s.insert(5);
    s.insert(10);

    for(int x: s)
    cout<<x<<" ";
    return 0;
}