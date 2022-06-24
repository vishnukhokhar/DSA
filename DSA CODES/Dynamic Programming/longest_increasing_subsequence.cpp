#include <bits/stdc++.h>
using namespace std;

int LIS(int arr[], int n)
{
    int lis[n];
    lis[0] = 1;
    for (int i = 1; i < n; i++)
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }
    int res = lis[0];
    for (int i = 0; i < n; i++)
    {
        res = max(res, lis[i]);
    }
    return res;
}
int main()
{

    int arr[] = {3, 4, 2, 8, 10, 5, 1};
    int n = 7;

    cout << LIS(arr, n);
}