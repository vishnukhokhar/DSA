#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prev=factorial(n-1);
    return (n*prev);
}

int main()
{
    int n;
    cin>>n;
    cout<<"factorial is "<<factorial(n);
}