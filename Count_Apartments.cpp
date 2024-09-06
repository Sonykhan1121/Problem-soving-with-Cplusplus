 #include<bits/stdc++.h>
 using namespace std;
char ar[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
bool isValid(int i,int j,int n,int m)
{
    return i>=0&&j>=0&&i<n&&j<m;
}
void DFS(int i,int j, int n,int m)
{
    
    visited[i][j] = true;
    for(auto add:d)
    {
        int nexti = i+add.first;
        int nextj = j+add.second;
        if(isValid(nexti,nextj,n,m)&&!visited[nexti][nextj]&&ar[nexti][nextj]!='#')
        {
            DFS(nexti,nextj,n,m);
            
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
    int count =0;
  for(int i =0;i<n;i++)
  {
    for(int j =0;j<m;j++)
    {
        if(ar[i][j]=='.'&&!visited[i][j])
        {
            count++;
            DFS(i,j,n,m);
        }
    }
  }
  cout<<count<<endl;
    
    return 0;
 }