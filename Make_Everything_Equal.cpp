#include <bits/stdc++.h>
using namespace std;
int main() 
{

    int tc;
    cin>>tc;
    while(tc--)
    {
          int n,k;
  cin>>n>>k;
  int a[n];
  int count_array[10002]={0};  
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    count_array[a[i]]++;

  }
  int index ,ct =0;
  for(int i=1;i<=10000;i++)
  {
    // if(count_array[i]>0)
    // {
    //     cout<<"value:"<<i<<endl;
    // }
    if(ct<count_array[i])
    {
        ct = count_array[i];
        index = i;
    }
  }
//   cout<<"need : "<<n-ct<<endl;
  if(n-ct<=k)
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