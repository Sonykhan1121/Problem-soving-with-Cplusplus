#include <bits/stdc++.h>
using namespace std;

bool sum_set_sum(int n, int ar[], int sum)
{
    if (n == 0 && sum == 0)
    {
        return dp[n][sum]= true;
    }
    if (n == 0)
    {
        return dp[n][sum]=false;
    }
    if(dp[n][sum]!=-1)
    {
        return dp[n][sum];
    }
    bool op1 = false, op2 = false;
    if (ar[n - 1] <= sum)
    {
        op1 = sum_set_sum(n - 1, ar, sum - ar[n - 1]);
        op2 = sum_set_sum(n - 1, ar, sum);
    }
    else

    {
        op2 = sum_set_sum(n - 1, ar, sum);
    }

    return dp[n][sum] =  op1 || op2;
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

    
    bool dp[n+1][sum+1];
    dp[0][0] = true;
    for(int i =1;i<=sum;i++)
    {
        dp[0][1] = false;
    }
    for(int i =1;i<=n;i++)
    {
        for(int j = 0;j<=sum;j++)
        {
            if(ar[i]<=j)
            {
                dp[i][j] = dp[i - 1][ j - ar[i - 1]]||dp[i - 1][j];

            }
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    if(dp[n][sum])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}