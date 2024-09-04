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
 void DFS(int i,int j)
 {
      cout<<i<<" "<<j<<endl;
      vis[i][j] = true;
      for(auto p :d)
      {
         int newi = i+p.first;
         int newj = j+p.second;
         if(isvalid(newi,newj)&&!vis[newi][newj])
         {
            DFS(newi,newj);
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
    DFS(sci,scj);
    
    return 0;
 }