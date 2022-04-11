#include<iostream>
using namespace std;

bool ispoweroftwo(int n)
{
    return (n && !(n & n-1));
}

int main()
{
    cout<<ispoweroftwo(5)<<endl;
    cout<<ispoweroftwo(16)<<endl;
}