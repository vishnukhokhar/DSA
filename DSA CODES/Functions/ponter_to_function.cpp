#include<iostream>
using namespace std;

int increment(int *a)
{
    a++;
}
int main()
{
    int a=20;

    
    increment(&a);
    cout<<a<<endl;
    
}