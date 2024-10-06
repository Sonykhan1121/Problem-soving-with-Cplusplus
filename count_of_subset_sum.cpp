#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int count_sum_set_sum(int n, int ar[], int sum)
{
    if (n == 0 && sum == 0)
    {
        return  1;
    }
    if (n == 0)
    {
        return 0;
    }
    if(dp[n][sum]!=-1)
    {
        return dp[n][sum];
    }
    int op1=0,op2=0;
    if (ar[n - 1] <= sum)
    {
        op1 = count_sum_set_sum(n - 1, ar, sum - ar[n - 1]);
        op2 = count_sum_set_sum(n - 1, ar, sum);
    }
    else

    {
        op2 = count_sum_set_sum(n - 1, ar, sum);
    }

    return dp[n][sum] =  op1 + op2;
}
int main()
{

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int sum;
    cin >> sum;

    for(int i =0;i<=n;i++)
    {
        for(int j = 0;j<=sum;j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<count_sum_set_sum(n,ar,sum);
    return 0;
}