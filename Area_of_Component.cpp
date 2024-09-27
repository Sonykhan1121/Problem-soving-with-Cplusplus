 #include<bits/stdc++.h>
 using namespace std;
   int n ,m;
   int count ;

   char ar[1005][1005];
   bool vis[1005][1005];
   vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
   bool isvalid(int i, int j)
   {
      return i>=0&&i<n&&j>=0&&j<m;
   }
   void DFS(int i,int j,int &count)
   {
        count++;
        //  cout<<i<<" "<<j<<endl;
         vis[i][j] = true;
         for(auto p :d)
         {
            int newi = i+p.first;
            int newj = j+p.second;
            if(isvalid(newi,newj)&&!vis[newi][newj]&&ar[newi][newj]=='.')
            {
               DFS(newi,newj,count);
            }

         }
   }

 int main()
 {

   
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
      for(int j =0;j<m;j++)
      {
         cin>>ar[i][j];
      }
    }
    
    memset(vis,false,sizeof(vis));
    int ans = INT_MAX;
    for(int i =0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(!vis[i][j]&&ar[i][j]=='.')
            {
                int count=0;
                DFS(i,j,count);
               if(count!=0) ans = min(ans,count);
            }
        }
    }
    if(ans==INT_MAX)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
    
    return 0;
 }