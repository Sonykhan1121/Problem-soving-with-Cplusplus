 #include<bits/stdc++.h>
 using namespace std;
vector<int> mp[100005];
bool visited[100005];
int level[100005];
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
    memset(level,-1,sizeof(level));
    int src,des,move;

    cin>>src>>des>>move;


    bfs(src);
    if(level[des]==-1)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int need = (level[des]+1)/2;
    // cout<<"level : "<<level[des]<<endl;
    if(need<=move)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
 }