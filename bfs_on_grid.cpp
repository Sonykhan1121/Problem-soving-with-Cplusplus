 #include<bits/stdc++.h>
 using namespace std;
 int n ,m;
 char ar[20][20];
 bool vis[20][20];
 vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
 bool isvalid(int i, int j)
 {
   return i>=0&&i<n&&j>=0&&j<m;
 }
 void BFS(int i,int j)
 {
     queue<pair<int,int>>q;
     q.push({i,j});
     vis[i][j] = true;
     while(!q.empty())
     {
        auto p = q.front();
        q.pop();
        cout<<p.first<<" "<<p.second<<endl;
        for(auto dir:d)
        {
            int newi = p.first+dir.first;
            int newj = p.second+dir.second;
            if(isvalid(newi,newj)&&!vis[newi][newj])
            {
                vis[newi][newj] = true;
                q.push({newi,newj});
            }
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
    int sci,scj;
    cin>>sci>>scj;
   //  pair<int,int> p;
   //  p = make_pair(sci,scj);
    BFS(sci,scj);
    
    return 0;
 }