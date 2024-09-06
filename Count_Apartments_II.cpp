 #include<bits/stdc++.h>
 using namespace std;
char ar[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
bool isValid(int i,int j,int n,int m)
{
    return i>=0&&j>=0&&i<n&&j<m;
}
void DFS(int i,int j, int n,int m,int & c)
{
    
    visited[i][j] = true;
    for(auto add:d)
    {
        int nexti = i+add.first;
        int nextj = j+add.second;
        if(isValid(nexti,nextj,n,m)&&!visited[nexti][nextj]&&ar[nexti][nextj]!='#')
        {
            c++;
            DFS(nexti,nextj,n,m,c);
            
        }
    }
    

}
 int main()
 {

    int n,m;
    cin>>n>>m;
    int starti,startj,endi,endj;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cin>>ar[i][j];
            
        }
    }
    memset(visited,false,sizeof(visited));
    vector<int> ans;
  for(int i =0;i<n;i++)
  {
    for(int j =0;j<m;j++)
    {
        if(ar[i][j]=='.'&&!visited[i][j])
        {
            
            int c=1;
            DFS(i,j,n,m,c);
            ans.push_back(c);
        }
    }
  }
  sort(ans.begin(),ans.end());
  if(ans.empty())
  {
    cout<<"0"<<endl;
    return;
  }
  for(auto i:ans)
  {
    cout<<i<<" ";
  }
//   cout<<count<<endl;
    
    return 0;
 }