#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    string s ;
    cin>>s;
    int first = s[0]+s[1]+s[2];
    int second = s[3]+s[4]+s[5];
    if(first==second)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

  }
  
    return 0;
}