#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{

    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n)
{

    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    int n; 
    cin>>n;
    cout<<"In decreasing order is: ";
    dec(n);
    cout<<endl;
    cout<<"Order of numbers in increasing order is "<<endl;
    inc(n);
}