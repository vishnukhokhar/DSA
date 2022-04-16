#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> a, pair<int,int> b)
{
    return(a.second < b.second);

}

int activity_selection(pair<int,int> arr[], int n)
{
    sort(arr,arr+n, mycmp);
    int prev=0;
    int res=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i].first >= arr[prev].second)
        {
            res++;
            prev=i;
        }
    }
    return res;

}


int main()
{
    pair<int,int> arr[]={make_pair(12,25), make_pair(10,20), make_pair(20,30)};
    int n=3;
    cout<<"No. of activity selected are: "<<activity_selection(arr,n);
}