#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }

    string ros=s.substr(1);         //substr will get all the string from the value initialised 
    reverse(ros);
    cout<<s[0];
}

int main()
{
    reverse("binod");
}