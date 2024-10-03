 #include<bits/stdc++.h>
 using namespace std;
 const int maxn = 1002;
 const int maxw = 1002;
 int dp[maxn][maxw];
 int knapsack(int n,int weight[],int value[],int  w)
 {
    if(w==0||n==0)
    {
        dp[n][w] = 0;

        return dp[n][w];
    }
    if(dp[n][w]!=-1)
    return dp[n][w];
    if(weight[n-1]<=w)
    {
        int option1 = knapsack(n-1,weight,value,w-weight[n-1])+value[n-1];
        int option2 = knapsack(n-1,weight,value,w);
        return dp[n][w] =max(option1,option2);
    }
    else
    {
        return dp[n][w]=knapsack(n-1,weight,value,w);
    }
 }
 int main()
 {

    int n;
    cin>>n;
    int w;
    cin>>w;
    int weight[n],value[n];
    for(int i =0;i<n;i++)
    {
        cin>>weight[i]>>value[i];
    }
    
    
    for(int i =1;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            dp[i][j] = -1;
        }
    }
    
    cout<<knapsack(n,weight,value,w)<<endl;
    // for(int i =0;i<=n;i++)
    // {
    //     for(int j =0;j<=w;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
 }