#include<bits/stdc++.h>
using namespace std;

struct twostacks
{
    int *arr;
    int cap, top1,top2;

    twostacks(int n)
    {
        cap=n;
        arr=new int[n];
        top1=-1;
        top2=cap;
    }

    void push1(int x)
    {
        if(top1<top2-1)
        top1++;
        arr[top1]=x;

    }

    void push2(int x)
    {
        if(top1<top2-1)
        top2--;
        arr[top2]=x;
    }

    int pop1()
    {
        if(top1>=0)
        {
        int res=arr[top1];
        top1--;
        return res;
        }
        else
        {
        cout<<"stack underflow"<<endl;
        }
    }

    int pop2()
    {
        if(top2<=cap)
        {
        int res=arr[top2];
        top2--;
        return res;
        }
        else
        {
        cout<<"Stack underflow"<<endl;
        }
    }
};

int main()
{
    twostacks ts(5);
    ts.push1(5); 
    ts.push2(10); 
    ts.push2(15); 
    ts.push1(11); 
    ts.push2(7); 
    cout << "Popped element from stack1 is "<<ts.pop1(); 
    ts.push2(40); 
    cout << "\nPopped element from stack2 is "<< ts.pop2(); 
    return 0; 
}