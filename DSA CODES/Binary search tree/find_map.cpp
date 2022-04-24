#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m.insert({1,"hello"});
    m.insert({2,"Friend"});
    m.insert({3,"oyee"});

    for(auto it=m.find(2);it!=m.end();it++)
    {
        cout<<(*it).first<<" ";
        cout<<(*it).second<<" ";
        cout<<endl;
    }
    return 0;
}