 #include<bits/stdc++.h>
 using namespace std;
 int n ,m;
 char ar[1005][1005];
 bool vis[1005][1005];
 char dir[1005][1005];
 vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
 vector<char> direction = {'R','L','U','D'};
 bool isvalid(int i, int j)
 {
   return i>=0&&i<n&&j>=0&&j<m&&ar[i][j]!='#';
 }
 string BFS(int i,int j,int desi,int desj)
 {
    string res = "";
     queue<pair<int,int>>q;
     q.push({i,j});
     vis[i][j] = true;
     while(!q.empty())
     {
        auto p = q.front();
        q.pop();
        if(p.first==desi&&p.second==desj)
        {
            int nowi = p.first;
            int nowj = p.second;
            while(dir[nowi][nowj]!='-')
            {
                res+=dir[nowi][nowj];
                if(dir[nowi][nowj]=='L')
                {
                    nowj++;
                }else if(dir[nowi][nowj]=='R')
                {
                    nowj--;
                }
                else if(dir[nowi][nowj]=='U')
                {
                    nowi++;
                }
                else if(dir[nowi][nowj]=='D')
                {
                    nowi--;
                }
            }
            return res;
        }
        // cout<<p.first<<" "<<p.second<<endl;
        for(int ii=0;ii<d.size();ii++)
        {
            int newi = p.first+d[ii].first;
            int newj = p.second+d[ii].second;
            if(isvalid(newi,newj)&&!vis[newi][newj])
            {
                dir[newi][newj] = direction[ii];
                vis[newi][newj] = true;
                q.push({newi,newj});
            }
        }
     }
     return res;
 }
 int main()
 {

   
    cin>>n>>m;
    
    int sci,scj,desi,desj;
    for(int i=0;i<n;i++)
    {
      for(int j =0;j<m;j++)
      {
         cin>>ar[i][j];
         if(ar[i][j]=='A')
         {
            sci = i;
            scj = j;
         }
         if(ar[i][j]=='B')
         {
            desi = i;
            desj = j;
         }
      }

    }
    
    memset(vis,false,sizeof(vis));
    memset(dir,'-',sizeof(dir));
    // cin>>sci>>scj;
   //  pair<int,int> p;
   //  p = make_pair(sci,scj);
   string ans =BFS(sci,scj,desi,desj);
    if(ans.size()==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    
    return 0;
 }