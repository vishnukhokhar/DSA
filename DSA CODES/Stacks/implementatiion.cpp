#include<iostream>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;

    mystack(int c)
    {
        cap=c;
        arr=new int[cap];
        top=-1;
    }

    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"stack overflow";
        }
        top++;
        arr[top]=x;
        
    }

    
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty";
        }

        int res=top[arr];
        top--;
        return res;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"stack is empty";

        }

        return arr[top];
    }

    int size()
    {
        return top+1;
    }

    bool isempty()
    {
        return (top==-1);
    }
};

int main()
{
    mystack s(5);
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