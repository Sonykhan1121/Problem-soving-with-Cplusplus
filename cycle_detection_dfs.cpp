 #include<bits/stdc++.h>
 using namespace std;
 const int N = 1e5+5;
 vector<int> ar[N];
 bool visited[N];
 int parent[N];
 bool cycle = false;

 void DFS(int i)
 {
    visited[i]=true;
    // cout<<i<<" ";
    for(auto child:ar[i])
    {
        if(visited[child]&&parent[i]!=child)
        {
            cycle = true;
        }
        if(!visited[child])
           {
                parent[child] = i;
                DFS(child);
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
        ar[a].push_back(b);
        ar[b].push_back(a);


    }
    memset(visited,false,sizeof(visited));
    for(int i =0;i<n;i++)
    {
        if(!visited[i])
        {
            DFS(i);
        }
 
    }
    // DFS(0);
    if(cycle)
    {
        cout<<"Cycle Detected"<<endl;
    }
    
    return 0;
 }