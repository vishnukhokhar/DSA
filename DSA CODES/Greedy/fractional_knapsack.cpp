#include<bits/stdc++.h>
using namespace std;

bool mycmp(pair<int,int> a, pair<int,int> b)
{
	double r1 = (double)a.first / a.second;

	double r2 = (double)b.first / b.second;

    return r1>r2;

}

int fractional_kanpsack(pair<int,int> arr[], int n, int w)
{
    sort(arr, arr+n, mycmp);
    double res=0.0;

    for(int i=0;i<n;i++)
    {
        if(arr[i].second<=w)
        {
            res=res+arr[i].first;
            w=w-arr[i].second;
        }

        else
        {
            res=res+ arr[i].first * ((double) w/arr[i].second);
            break;

    }
    }
    return res;
}

int main()
{
    pair<int,int> arr[]={make_pair(100,20), make_pair(60,6), make_pair(120,30)};
    int n=3;
    int w=50;

    


    cout<<"Maximum profit is: "<<fractional_kanpsack(arr,n,w);
}