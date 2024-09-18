 #include<bits/stdc++.h>
 using namespace std;
int n;
vector<int> mp[100005];
bool visited[100005];
int level[10005];
int parent[100005];
vector<int> bfs(int val)
{
    queue<int> q;
    vector<int> ans;
    q.push(val);
    visited[val] = true;
    level[val] = 0;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout<<par<<" "<<level[par]<<endl;
        if(par==n)
        {
            while(parent[par]!=-1)
            {
                ans.push_back(par);
                par = parent[par];
            }
            ans.push_back(1);
            return ans;
        }
        
        for(int i:mp[par])
        {
            int child = i;
           if(!visited[child])
           {
            visited[child] = true;
            parent[child] = par;
            q.push(child);
           }
        }
    }
    return ans;
}
 int main()
 {

    int e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);

    }
    memset(visited,false,sizeof(visited));
    memset(parent,-1,sizeof(parent));
    // memset(level,0,sizeof(level));
    int src=1;

    vector<int> ans =bfs(src);
    if(ans.size()==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
 }