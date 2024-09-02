 #include<bits/stdc++.h>
 using namespace std;
vector<int> ar[1005];
bool visited[1005];
int parent[1005];
void BFS(int root)
{
    queue<int> q;
    q.push(root);
    visited[root]=true;
    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        cout<<par<<" ";
        for(int i:ar[par])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
                parent[i] = par;
            }
        }
    }
    cout<<endl;

}
 int main()
 {

    int n ,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);

    }
    int root;
    cin>>root;
    memset(visited,false,sizeof(visited));
    memset(parent,-1,sizeof(parent));
    BFS(root);
    // cout<<"HI"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<parent[i]<<" ";

    }
    cout<<endl;
    int des = 5;
    vector<int> path;
    while(des!=-1)
    {
        path.push_back(des);
        des = parent[des];
    }
    reverse(path.begin(),path.end());
    for(int i :path)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
 }