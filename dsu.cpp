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
 void Union(int u,int v)
 {
    int leadA = find(u);
    int leadB = find(v);
    par[leadA] = leadB;
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
 void Union_by_Level(int u,int v)
 {
    int leadA = find(u);
    int leadB = find(v);
    if(level[leadA]>level[leadB])
    {
        par[leadB] = leadA;
        

    }
    else if(level[leadB]>level[leadA])
    {
        par[leadA] = leadB;
        
    }
    else
    {
        par[leadA] = leadB;
        level[leadB]++;
        
    }

 }
 int main()
 {

    
    dsu_initialize(7);
    Union_by_size(1,2);
    Union_by_size(2,3);
    Union_by_size(4,5);
    Union_by_size(5,6);
    cout<<find(1)<<endl;
    cout<<find(4)<<endl;

    return 0;
 }