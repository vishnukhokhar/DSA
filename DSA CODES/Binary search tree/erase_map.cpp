#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m.insert({1,"hello"});
    m.insert({2,"Friend"});
    m.insert({5,"oyee"});

    cout<<m.size()<<endl;
    m.erase(2);
    cout<<m.size();
}