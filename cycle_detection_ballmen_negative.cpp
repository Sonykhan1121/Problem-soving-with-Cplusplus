 #include<bits/stdc++.h>
 using namespace std;
 const int N = 1e5+5;
 int dis[N];
 class edges
 {
    public:
        int u,v,c;
        edges(int u,int v,int c)
        {
            this->u = u;
            this->v  = v;
            this->c = c;
        }

 };
 int main()
 {

    int n,e;
    cin>>n>>e;
    vector<edges> Edgelist;
    while(e--)
    {
        int u,v,c;
        cin>>u>>v>>c;
        Edgelist.push_back(edges(u,v,c));
    }
    for(int i =0;i<n;i++)
    {
        dis[i]  =INT_MAX;
    }
    dis[0]  = 0;
    // for(edges ed:Edgelist)
    // {
    //     cout<<ed.u<<" "<<ed.v<<" "<<ed.c<<endl;
    // }
    for(int i=0;i<n-1;i++)
        {
            
        
    for(edges ed:Edgelist)
    {
        int u,v,c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if(dis[u]==INT_MAX)
        continue;
        if(dis[u]+c<dis[v])
        {
            dis[v] = dis[u]+c;
        }
        
    }
        }
        bool cycle = false;
        for(edges ed:Edgelist)
    {
        int u,v,c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if(dis[u]==INT_MAX)
        continue;
        if(dis[u]+c<dis[v])
        {
            cycle = true;
            break;
        }
        
    }
    if(cycle)
    {
        cout<<"Cycle detected"<<endl;
    }
    return 0;
 }