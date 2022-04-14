#include<iostream>
#include<vector>
using namespace std;

struct mystack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }

    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }

    int peek()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool isempty()
    {
        return v.empty();
    }
};

int main()
{
    mystack s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);

    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.size();
}