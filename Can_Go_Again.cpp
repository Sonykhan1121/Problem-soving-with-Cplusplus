#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long int dis[N];
long long int INF = 1e15 + 5;
class edges
{
public:
    int u, v;
    long long int c;
    edges(int u, int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
int main()
{

    int n, e;
    cin >> n >> e;
    vector<edges> Edgelist;
    while (e--)
    {
        int u, v;
        long long int c;
        cin >> u >> v >> c;
        Edgelist.push_back(edges(u, v, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    int src;
    cin >> src;
    dis[src] = 0;
    for (int i = 0; i < n - 1; i++)
    {

        for (edges ed : Edgelist)
        {
            int u, v;
            long long int c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] == INF)
                continue;
            if (dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (edges ed : Edgelist)
        {
            int u, v;
            long long int c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] == INF)
                continue;
            if (dis[u] + c < dis[v])
            {
                cycle = true;
                break;

                dis[v] = dis[u] + c;
            }
        }
        if(cycle)
        {
            cout<<"Negative Cycle Detected"<<endl;
            return 0;
        }
    int q;
    cin>>q;
    while(q--)
    {
        int des;
        cin>>des;
        if(dis[des]==INF)
        {
            cout<<"Not Possible"<<endl;
        }
        else
        {
            cout<<dis[des]<<endl;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << dis[i] << " ";
    // }
    // cout << endl;

    return 0;
}