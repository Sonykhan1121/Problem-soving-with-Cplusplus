 #include<bits/stdc++.h>
 using namespace std;
vector<int> mp[1005];
bool visited[1005];
int level[1005];
void bfs(int val)
{
    queue<int> q;
    q.push(val);
    visited[val] = true;
    level[val] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        cout<<par<<" "<<level[par]<<endl;
        
        for(int i:mp[par])
        {
            int child = i;
           if(!visited[child])
           {
            visited[child] = true;
            level[child] = level[par]+1;
            q.push(child);
           }
        }
    }
}
 int main()
 {

    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);

    }
    memset(visited,false,sizeof(visited));
    memset(level,0,sizeof(level));
    int src;
    cin>>src;

    bfs(src);

    
    return 0;
 }