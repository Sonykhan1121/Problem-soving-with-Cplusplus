 #include<bits/stdc++.h>
 using namespace std;
 const int N = 1e6+5;
 int par[N];
 int group_size[N];
 int level[N];
 void dsu_initialize(int n)
 {
    for(int i =0;i<n;i++)
    {
        par[i] = -1;
        group_size[i] = 1;
    }
 }
 int find(int x)
 {
    if(par[x]==-1)
    {
        return x;
    }
    par[x] = find(par[x]);
    return par[x];
 }

 void Union_by_size(int u,int v)
 {
    int leadA = find(u);
    int leadB = find(v);
    if(group_size[leadA]>group_size[leadB])
    {
        par[leadB] = leadA;
        group_size[leadA]+=group_size[leadB];

    }
    else
    {
        par[leadA] = leadB;
        group_size[leadB]+=group_size[leadA];
    }

 }
 class Edge
 {
    public:
        int u,v,c;
        Edge(int u,int v,int c)
        {
             this->u = u;
             this->v = v;
             this->c = c;
        }
 };
 bool cmp(Edge e1,Edge e2)
 {
    return e1.c<e2.c;
 }
 int main()
 {

    int n ,e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edgelist;
    while(e--)
    {
        int u,v,c;
        cin>>u>>v>>c;
        edgelist.push_back(Edge(u,v,c));
        
    }
    sort(edgelist.begin(),edgelist.end(),cmp);
    int totalcost = 0;
    for(auto i:edgelist)
    {
        // cout<<i.u<<" "<<i.v<<" "<<i.c<<endl;
        int left = find(i.u);
        int right = find(i.v);
        if(left!=right)
        {
            Union_by_size(i.u,i.v);
            totalcost+=i.c;
        }
    }
    cout<<"Total cost : "<<totalcost<<endl;
    return 0;
 }