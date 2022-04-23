#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    s.insert(15);
    s.insert(5);
    s.insert(10);
    auto it=s.find(12);
    if(it==s.end())
    cout<<"Not found";
    else{
        cout<<"found";
    }
}