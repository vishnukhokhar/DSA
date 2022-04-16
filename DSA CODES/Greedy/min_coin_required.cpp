#include<bits/stdc++.h>
using namespace std;

int min_coins(int coin[], int n, int amount)
{
    sort(coin,coin+n);
    int res=0;
    for(int i=n-1;i>=0;i--)
    {
        if(coin[i]<=amount)
        {
            int c=floor(amount/coin[i]);
            res=res+c;
            amount=amount-coin[i]*c;
        }

        if(amount==0)
        {
            break;
        }
    }
    return res;
}

int main()
{
     int coin[] = {5, 10, 2, 1};
     int n = 4;
     int amount = 57;

     cout<<"Minimum coins required: "<<min_coins(coin,n,amount)<<endl;
      
}