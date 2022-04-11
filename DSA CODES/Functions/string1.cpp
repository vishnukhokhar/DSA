#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="ajsabjnsfs";

    for(int i=0;i<str.length();i++)
    {
        cout<<str[i]<<endl;
    }
    
    for(int i=0;i<str.length();i++)
    {
    if(str[i]>='a' && str[i]<='z')
    {
        str[i]-=32;

    }
    
    }
    cout<<str<<endl;

    string str2="AADBDIDBIBSLKKLK";

    for (int i=0;i<str2.length();i++)
    {
        if(str2[i]>='A' && str2[i]<='Z' )
        {
            str2[i]+=32;
        }
    }
    cout<<str2<<endl;
}