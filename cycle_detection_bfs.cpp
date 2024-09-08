 #include<bits/stdc++.h>
 using namespace std;
vector<int> mp[1005];
bool visited[1005];
int level[1005];
int parent[1005];
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
        // cout<<par<<" "<<level[par]<<endl;
        
        for(int child:mp[par])
        {
            if(visited[child]&&parent[par] != child)
            {
                cout<<"Cycle Detected: "<<par<<" -> "<<child<<endl;
                return;
            }
           if(!visited[child])
           {
            visited[child] = true;
            level[child] = level[par]+1;
            parent[child] = par;
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
    memset(parent,-1,sizeof(parent));
    
    for(int i =0;i<n;i++)
    {
        if(!visited[i])
        {
            bfs(i);
        }
    }
   
    
    return 0;
 }