 #include<bits/stdc++.h>
 using namespace std;
 int n ,m;
 char ar[1005][1005];
 bool vis[1005][1005];
 bool destinaion ;
 vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
 bool isvalid(int i, int j)
 {
   return i>=0&&i<n&&j>=0&&j<m;
 }
 void BFS(int i,int j,int di,int dj)
 {
     queue<pair<int,int>>q;
     q.push({i,j});
     vis[i][j] = true;
     while(!q.empty())
     {
        auto p = q.front();
        q.pop();
        // cout<<p.first<<" "<<p.second<<endl;
        for(auto dir:d)
        {
            int newi = p.first+dir.first;
            int newj = p.second+dir.second;
            if(isvalid(newi,newj)&&!vis[newi][newj]&&ar[newi][newj]=='.')
            {
                if(newi==di&&newj==dj)
                {
                    destinaion = true;
                    return;
                }
                vis[newi][newj] = true;
                q.push({newi,newj});
            }
        }
     }
 }
 int main()
 {

   
    cin>>n>>m;
    destinaion = false;
    for(int i=0;i<n;i++)
    {
      for(int j =0;j<m;j++)
      {
         cin>>ar[i][j];
      }
    }
    
    memset(vis,false,sizeof(vis));
    int sci,scj;
    cin>>sci>>scj;
    int di,dj;
    cin>>di>>dj;
    if(sci==di&&scj==dj)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    BFS(sci,scj,di,dj);
    if(destinaion)
    {
        cout<<"YES"<<endl;
        
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
 }