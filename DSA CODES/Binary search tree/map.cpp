#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>m;
    m.insert({2,200});
    m[5]=500;
    m.insert({1,700});
    for(auto &x:m)
    {
        cout<<x.first<<" ";
        cout<<x.second<<" ";
        cout<<endl;

    }
    cout<<"size is:"<<m.size()<<" ";
    cout<<m[3]<<endl;       // it will add it to the keys.
    cout<<"size is "<<m.size();
}