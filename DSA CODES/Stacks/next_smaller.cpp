#include<bits/stdc++.h>
using namespace std;

vector<int> next_smaller(int arr[],int n)
{
    stack<int> s;
    vector<int>v;
    s.push(n-1);
    v.push_back(-1);

    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && s.top()>=arr[i])
        {
            s.pop();
        }

        int nexsmall=s.empty()?-1:s.top();
        v.push_back(nexsmall);
        s.push(arr[i]);

    }

    reverse(v.begin(), v.end());
    return v;


}

int main()
{
    int arr[]={4, 8, 5, 2, 25};
    int n=5;
    for(int x: next_smaller(arr,n))
    {
        cout<<x<<" ";
    }
}