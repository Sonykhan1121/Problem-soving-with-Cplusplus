 #include<bits/stdc++.h>
 using namespace std;
 const int N = 1e5+5;
 vector<int> ar[N];
 bool visited[N];
 bool pathvisit[N];
bool cycle = false;
 void DFS(int i)
 {
    visited[i]=true;
    pathvisit[i] = true;
    for(auto child:ar[i])
    {
        if(pathvisit[child])
        {
            cycle = true;
        }
        if(!visited[child])
        {
            DFS(child);
        }
    }
    pathvisit[i] = false;
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
        


    }
    memset(visited,false,sizeof(visited));
    memset(pathvisit,false,sizeof(pathvisit));
    cycle = false;
    for(int i =0;i<n;i++)
    {
        if(!visited[i])
        {
            DFS(i);
        }
    }
    if(cycle)
    {
        cout<<"Cycle detected"<<endl;

    }
    else
    {
        cout<<"Not detected"<<endl;
    }
    return 0;
 }