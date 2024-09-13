#include <bits/stdc++.h>
using namespace std;
int n, m;
int mv ;
bool found ;
char ar[105][105];
bool vis[105][105];
int dis[105][105];
vector<pair<int, int>> d = {{2, 1}, {2, -1}, {1, -2}, {1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {-1, 2}};

bool isvalid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}
void BFS(int i, int j,int qi,int qj)
{
    queue<pair<pair<int, int>,int>> q;
    q.push({{i, j},0});
    vis[i][j] = true;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        // cout<<p.first<<" "<<p.second<<endl;
        for (auto dir : d)
        {
            int newi = p.first.first + dir.first;
            int newj = p.first.second + dir.second;
            if (isvalid(newi, newj) && !vis[newi][newj])
            {
                vis[newi][newj] = true;
                if(qi==newi&&qj==newj)
                {
                    found = true;
                    mv = p.second + 1;
                    return; 
                }
                q.push({{newi, newj},p.second+1});
            }
        }
    }
};

int main()
{

   int tc;
   cin>>tc;
   while(tc--)
   {
     cin >> n >> m;

    
    
    memset(vis, false, sizeof(vis));
    memset(dis, INT_MAX, sizeof(dis));
    int sci, scj;
    cin >> sci >> scj;
    int desi,desj;
    cin>>desi>>desj;
    if(sci==desi&&scj==desj)
    {
        cout<<"0"<<endl;
        continue;
    }
    found = false;
    mv =0;
    BFS(sci, scj,desi,desj);
    if(found)
    {
        cout<<mv<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
   }
    return 0;
}