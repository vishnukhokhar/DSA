#include <bits/stdc++.h>
using namespace std;
int memo[10000];

int fib(int n)
{
    if (memo[n] == -1)
    {
        int res;
        if (n == 1 || n == 0)
        {
            return n;
        }
        else
        {
            res = fib(n - 1) + fib(n - 2);
        }
        memo[n] = res;
    }
    return memo[n];
}

int main()
{

    int n = 6;

    memset(memo, -1, sizeof(memo));

    cout << fib(n);
}