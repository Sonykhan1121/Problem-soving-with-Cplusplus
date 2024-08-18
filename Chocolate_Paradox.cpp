#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int x,y,t;
  cin>>x>>y>>t;
  
  for(int i=0;i<=(t/x);i++)
  {

    for(int j =0;j<=(t/y);j++)
    {
        if(i*x+j*y==t)
        {
            cout<<"YES";
            return 0;
        }
    }
  }
  cout<<"NO";
    
  
    return 0;
}