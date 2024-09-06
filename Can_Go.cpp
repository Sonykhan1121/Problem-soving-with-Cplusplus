 #include<bits/stdc++.h>
 using namespace std;
char ar[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
bool isValid(int i,int j,int n,int m)
{
    return i>=0&&j>=0&&i<n&&j<m;
}
bool DFS(int i,int j, int endi,int endj,int n,int m)
{
    if(i==endi&&j==endj)
    {
        return true;
    }
    visited[i][j] = true;
    for(auto add:d)
    {
        int nexti = i+add.first;
        int nextj = j+add.second;
        if(isValid(nexti,nextj,n,m)&&!visited[nexti][nextj]&&ar[nexti][nextj]!='#')
        {
            if(DFS(nexti,nextj,endi,endj,n,m))
            {
                return true;
            }
        }
    }
    return false;

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
            if(ar[i][j]=='A')
            {
                starti = i;
                startj = j;

            }
            if(ar[i][j]=='B')
            {
                endi = i;
                endj = j;
            }
        }
    }
    memset(visited,false,sizeof(visited));
   bool have = DFS(starti,startj,endi,endj,n,m);
   if(have)
   {
    cout<<"YES"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
    
    return 0;
 }