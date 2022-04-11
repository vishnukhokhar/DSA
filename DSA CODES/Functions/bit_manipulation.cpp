#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);

}
int set_bit(int n, int pos)
{
    return (n | (1<<pos));

}

int clear_bit(int n, int pos)
{
    int mask=~(1<<pos);
    return (n & mask);
}


int update_bit(int n, int pos, int value)
{
    int mask=~(1<<pos);
    n=n & mask;

    return (n | (value<<pos));
}

int main()
{
    cout<<getbit(5,2)<<endl;
    cout<<set_bit(5,1)<<endl;
    cout<<clear_bit(5,2)<<endl;
    cout<<update_bit(5,1,1);
}