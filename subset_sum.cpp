#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
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

    for(int i =0;i<=n;i++)
    {
        for(int j = 0;j<=sum;j++)
        {
            dp[i][j] = -1;
        }
    }
    if(sum_set_sum(n, ar, sum))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}