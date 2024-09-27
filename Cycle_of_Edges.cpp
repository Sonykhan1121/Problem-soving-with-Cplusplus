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

 int main()
 {

    int n,e;
    cin>>n>>e;
    int ans =0;
    dsu_initialize(n);
    while(e--)
    {
        int u,v;
        cin>>u>>v;
        int first = find(u);
        int second = find(v);
        // cout<<first<<" "<<second<<endl;
        if(first==second)
        {
            ans++;
        }
        else
        {
            Union_by_size(u,v);
        }
        
    }


    cout<<ans<<endl;
    return 0;
 }