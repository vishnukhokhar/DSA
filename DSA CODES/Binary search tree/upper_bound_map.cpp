#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m.insert({1,"hello"});
    m.insert({2,"Friend"});
    m.insert({5,"oyee"});
    auto it=m.upper_bound(6);
    if(it!=m.end())
    {
        cout<<(*it).first<<" ";
        cout<<(*it).second<<" ";
        cout<<endl;

    }
    else
    cout<<"NO greater value";
}