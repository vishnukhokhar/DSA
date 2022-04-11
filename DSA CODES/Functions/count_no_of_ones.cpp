#include<bits/stdc++.h>
using namespace std;

int number_of_ones(int n)
{
    int count=0;
    while(n)
    {
        n=n & (n-1);
        count++;
    }

    return count;
}

int main()
{
    cout<<number_of_ones(16)<<endl;
    cout<<number_of_ones(19)<<endl;
    cout<<number_of_ones(12)<<endl;

}