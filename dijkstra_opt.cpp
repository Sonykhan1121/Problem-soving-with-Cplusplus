 #include<bits/stdc++.h>
 using namespace std;

 const int N  = 100;
 int dis[N];
 vector<pair<int,int>> ar[N];
 class cmp{
    public:
        bool operator()(pair<int,int>a, pair<int,int> b)
        {
            return a.second>b.second;
        }
 };
 void dijkstra(int src)
 {
    priority_queue<pair<int,int>,vector<pair<int,int>>, cmp> q;
    q.push({src,0});
    dis[src] = 0;
    while(!q.empty())
    {
        pair<int,int> parent = q.top();
        q.pop();
        for(auto child:ar[parent.first])
        {
            int childnode = child.first;
            int childcost = child.second;
            if(parent.second+childcost<dis[childnode])
            {
                q.push({childnode,parent.second+childcost});
                dis[childnode] = parent.second+childcost;
            }
        }
    }
 }
 int main()
 {

    
    int n,e;
    std::cin>>n>>e;
    while(e--)
    {
        int a ,b,w;
        std::cin>>a>>b>>w;
        // cout<<a<<" "<<b<<" "<<w<<endl;
        ar[a].push_back({b,w});
        ar[b].push_back({a,w});

    }
    for(int i=0;i<n;i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for(int i =0;i<n;i++)
    {
        cout<<dis[i]<<endl;
    }
    return 0;
 }