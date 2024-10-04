 #include<bits/stdc++.h>
 using namespace std;
const int N= 12;
const int M = 12;
 int dp[N][M];
 int ar[N][M];
 int find_path_maximum(int n,int m)
 {
    
    if(n==1&&m==1)
    {
        return dp[n][m] = ar[n][m];
    }
    if(dp[n][m]!=-1)
    {
        return dp[n][m];
    }


    int left =INT_MIN;
    int right = INT_MIN;
    if(m-1>0)
        left= find_path_maximum(n,m-1)+ar[n][m];
    if(n-1>0) right = find_path_maximum(n-1,m)+ar[n][m];
    int mx = max(left,right);
    dp[n][m] = mx;
    return dp[n][m];
 }
 int main()
 {

    int n,m;
    cin>>n>>m;
    
    for(int i =1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            cin>>ar[i][j];
            dp[i][j] = -1;
        }
    }
    
    cout<<find_path_maximum(n,m)<<endl;
    return 0;
 }