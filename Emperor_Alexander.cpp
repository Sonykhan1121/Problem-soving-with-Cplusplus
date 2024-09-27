 #include<bits/stdc++.h>
 using namespace std;
 const int N = 1e5+5;
 int par[N];
 int group_size[N];

 void dsu_initialize(int n)
 {
    for(int i =1;i<=n;i++)
    {
        par[i] = i;
        group_size[i] = 1;
    }
 }
 int find(int x)
 {
    if(par[x]==x)
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
        int u,v;
        long long c;
        Edge(int u,int v,long long c)
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
    int tc=0;
    while(tc<e)
    {
        int u,v;
        long long c;
        cin>>u>>v>>c;
        edgelist.push_back(Edge(u,v,c));
        tc++;
    }
    sort(edgelist.begin(),edgelist.end(),cmp);
    long long  totalcost = 0;
    int connected_nodes=0;
    for(auto i:edgelist)
    {
        // cout<<i.u<<" "<<i.v<<" "<<i.c<<endl;
        int left = find(i.u);
        int right = find(i.v);
        if(left!=right)
        {
            e--;
            Union_by_size(i.u,i.v);
            totalcost+=i.c;
            connected_nodes++;
        }
    }
    if(connected_nodes==n-1)
    {
        cout<<e<<" "<<totalcost<<endl;
    }
    else
    cout<<"Not Possible"<<endl;
    return 0;
 }