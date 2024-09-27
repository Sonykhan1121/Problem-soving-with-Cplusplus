 #include<bits/stdc++.h>
 using namespace std;
 int n ,m;
 char ar[1005][1005];
 bool vis[1005][1005];
 pair<int,int> direction[1005][1005];
 vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
 bool isvalid(int i, int j)
 {
   return i>=0&&i<n&&j>=0&&j<m;
 }
 void BFS(int i,int j,int endi,int endj)
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
            if(isvalid(newi,newj)&&!vis[newi][newj]&&ar[newi][newj]!='#')
            {
                direction[newi][newj] = {p.first,p.second};
                vis[newi][newj] = true;
                q.push({newi,newj});
            }
        }
     }
 }
 int main()
 {

   
    cin>>n>>m;
    int starti,startj,endi,endj;
    for(int i=0;i<n;i++)
    {
      for(int j =0;j<m;j++)
      {
         cin>>ar[i][j];
         
         if(ar[i][j]=='R')
         {
            starti = i;
            startj = j;
         }
         else if(ar[i][j]=='D')
         {
            endi = i;
            endj = j;
         }
      }
    }
    direction[endi][endj] = {-1,-1};
    memset(vis,false,sizeof(vis));
    
   
    BFS(starti,startj,endi,endj);
    if(direction[endi][endj].first==-1)
    {
         for(int i =0;i<n;i++)
    {
        for(int  j =0;j<m;j++)
        {
            cout<<ar[i][j]<<"";
        }
        cout<<endl;
    }
        return 0;
    }
    int nowi = direction[endi][endj].first;
    int nowj =  direction[endi][endj].second;
    while(ar[nowi][nowj]!='R')
    {
        ar[nowi][nowj] ='X';
        pair<int,int> p = direction[nowi][nowj];
        nowi = p.first;
        nowj = p.second;
    }
    for(int i =0;i<n;i++)
    {
        for(int  j =0;j<m;j++)
        {
            cout<<ar[i][j]<<"";
        }
        cout<<endl;
    }
    
    return 0;
 }