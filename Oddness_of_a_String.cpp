#include <bits/stdc++.h>
using namespace std;
int main() 
{
  
   int tc;
   cin>>tc;
    while(tc--)
    {
        int n , q;
        cin>>n>>q;
        int prefix[n+1][26] = {0};
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {   
                prefix[i+1][s[i]-'a']++;
            }
            else
            {
                for(int j =0;j<26;j++)
                {
                    prefix[i+1][j] = prefix[i][j];
                }
                prefix[i+1][s[i]-'a']++;

            }
        }
        while(q--)
        {
            int l , r;
            cin>>l>>r;
            int odd_count =0;
            for(int j =0;j<26;j++)
            {
                int dif = prefix[r][j]-prefix[l-1][j];
                if(dif%2!=0)
                {
                    odd_count++;
                }
            }
            cout<<odd_count<<endl;
            
        }


    }


    return 0;
}