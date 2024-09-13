#include <bits/stdc++.h>
using namespace std;
long long int INF = 1e18+5;
int main()
{

    int n, e;
    cin >> n >> e;
    long long int a[n+1][n+1];
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            a[i][j] = INF;
            if (i == j)
                a[i][j] = 0;
        }
        // cout<<endl;
    }
    while (e--)
    {
        int u, v;
        long long int c;
        cin >> u >> v >> c;
        a[u][v] = min(a[u][v],c);
    }
    for (int k = 1; k <=n; k++)
    {
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=n; j++)
            {
                if(a[i][k]==INF||a[k][j]==INF)
                {
                    continue;
                }
                if(a[i][k]+a[k][j]<a[i][j])
                {
                    a[i][j] = a[i][k]+a[k][j];
                }
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (a[i][j] == INT_MAX)
    //         {
    //             cout << "INF" << " ";
    //         }
    //         else
    //             cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i =0;i<n;i++)
    // {
    //     if(a[i][i]<0)
    //     {
    //         cout<<"Cycle detected"<<endl;
    //         break;
    //     }
    // }
    int q;
    cin>>q;
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        if(a[u][v]!=INF)
        cout<<a[u][v]<<endl;
        else 
        cout<<"-1"<<endl;
    }
    return 0;
}