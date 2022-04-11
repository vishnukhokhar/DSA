#include<bits/stdc++.h>
using namespace std;

void prime_sieve(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
       if(prime[i]==0)
       {
           for(int j=i*i;j<=n;j=j+i)
           {
               prime[j]=1;
           }
       }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of elements"<<endl;
    cin>>n;
    prime_sieve(n);

}