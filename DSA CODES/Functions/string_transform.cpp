#include<bits/stdc++.h>

using namespace std;

int main()
{
    string lower="afadjfajkag";
    transform(lower.begin(),lower.end(), lower.begin(), ::toupper);
    cout<<lower<<endl;


    string upper="ADBFBISBB";
    transform(upper.begin(), upper.end(), upper.begin(),:: tolower);
    cout<<upper<<endl;
}