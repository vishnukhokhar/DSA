#include<iostream>
using namespace std;
void subseq(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros=s.substr(1);

    int code=ch;

    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,to_string(code));
}

int main()
{
    subseq("AB","");
    cout<<endl;
}