 #include<bits/stdc++.h>
 using namespace std;
 int dp[1005][1005];
 int lcs(string a,int i,string b,int j)
 {
    if(i==0||j==0)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }

    if(a[i-1]==b[j-1])
    {
        return dp[i][j]=1 + lcs(a,i-1,b,j-1);

    }
    else
    {
        int ans1 = lcs(a,i-1,b,j);
        int ans2  = lcs(a,i,b,j-1);
        return dp[i][j]=max(ans1,ans2);
    }

 }
 int main()
 {

    string a,b;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));

    cout<<lcs(a,a.size(),b,b.size())<<endl;
    
    return 0;
 }