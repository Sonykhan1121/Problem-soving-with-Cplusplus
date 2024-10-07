 #include<bits/stdc++.h>
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
    // for(int i  =0;i<n;i++)
    // {
    //     for(int j =0;j<=sum;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    return dp[n][sum];
}
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];

        }
        int needed = 1000-m;
        if(needed==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(sum_set_sum(n,arr,needed))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        
    }
    
    return 0;
 }