#include <bits/stdc++.h>
using namespace std;

bool sum_set_sum(int n, int ar[], int sum)
{
    bool dp[n+1][sum+1];
   
    dp[0][0] = true;
    for(int i =1;i<=sum;i++)
    {
        dp[0][i] = false;
    }
    for(int i =1;i<=n;i++)
    {
        for(int j =0;j<=sum;j++)
        {
            if(ar[i-1]<=j)
            {
                dp[i][j] = dp[i - 1][ j - ar[i - 1]]||dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }


    return dp[n][sum];
}
int main()
{

   int tc;
   cin>>tc;
   while(tc--)
   {
     int n;
    cin >> n;
    int ar[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum+=ar[i];
    }

    if(sum%2!=0)
    {
        cout<<"NO"<<endl;
        continue;
    }
    sum/=2;

    
    if(sum_set_sum(n, ar, sum))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
   }
    return 0;
}