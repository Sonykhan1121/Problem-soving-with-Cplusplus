 #include<bits/stdc++.h>
 using namespace std;
   int n ,m;
   char ar[20][20];
   bool vis[20][20];
   vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
   bool isvalid(int i, int j)
   {
      return i>=0&&i<n&&j>=0&&j<m;
   }
   void DFS(int i,int j)
   {
         cout<<i<<" "<<j<<endl;
         vis[i][j] = true;
         for(auto p :d)
         {
            int newi = i+p.first;
            int newj = j+p.second;
            if(isvalid(newi,newj)&&!vis[newi][newj])
            {
               DFS(newi,newj);
            }

         }
   }
<<<<<<< Tabnine <<<<<<<
/**//+
 * @brief Checks if a given cell is within the grid boundaries.//+
 *//+
 * This function takes the row and column indices of a cell as input and checks if they fall within the valid range for the grid.//+
 * The grid is defined by the global variables 'n' and 'm'.//+
 *//+
 * @param i The row index of the cell.//+
 * @param j The column index of the cell.//+
 *//+
 * @return True if the cell is within the grid boundaries, false otherwise.//+
 *///+
bool isvalid(int i, int j)//+
{//+
   return i >= 0 && i < n && j >= 0 && j < m;//+
}//+
>>>>>>> Tabnine >>>>>>>// {"conversationId":"d3aa8fc7-74c4-46ba-89eb-9af6d6dd2baa","source":"instruct"}
 int main()
 {

   
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
      for(int j =0;j<m;j++)
      {
         cin>>ar[i][j];
      }
    }
    
    memset(vis,false,sizeof(vis));
    int sci,scj;
    cin>>sci>>scj;
   //  pair<int,int> p;
   //  p = make_pair(sci,scj);
    DFS(sci,scj);
    
    return 0;
 }