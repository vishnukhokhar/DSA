#include<iostream>
#include<vector>
using namespace std;

struct mystack
{
    vector <int> v;
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
    s.push(13);
    s.push(12);
    s.push(11);
    s.push(10);

    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isempty();

}