 #include<bits/stdc++.h>
 using namespace std;

 const int N  = 100005;
 long long dis[N];
 int par[N];
 vector<pair<int,long long>> ar[N];
 class cmp{
    public:
        bool operator()(pair<int,long>a, pair<int,long> b)
        {
            return a.second>b.second;
        }
 };
 void dijkstra(int src)
 {
    priority_queue<pair<int,long long>,vector<pair<int,long long>>, cmp> q;
    q.push({src,0});
    dis[src] = 0;
    
    while(!q.empty())
    {
        pair<int,long long> parent = q.top();
        q.pop();
        for(auto child:ar[parent.first])
        {
             int childnode = child.first; 
            int childcost = child.second;
            if(parent.second+childcost<dis[childnode])
            {
                par[childnode] = parent.first;  
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
        int a ,b;
        long long w;
        std::cin>>a>>b>>w;
        // cout<<a<<" "<<b<<" "<<w<<endl;
        ar[a].push_back({b,w});
        ar[b].push_back({a,w});

    }
    for(int i=1;i<=n;i++)
    {
        dis[i] = 1e18;
        par[i] = -1;
    }
    dijkstra(1);
    if(par[n]==-1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        vector<int> ans;
        int now = n;
        ans.push_back(now);
        while(par[now]!=-1)
        {
            now = par[now];
            ans.push_back(now);

        }
        reverse(ans.begin(),ans.end());
        for(auto v:ans)
        {
            cout<<v<<" ";
        }
    }
    return 0;
 }