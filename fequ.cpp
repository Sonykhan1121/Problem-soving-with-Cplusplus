#include <bits/stdc++.h>
using namespace std;
long long power(long long n,long long m)
{
    if(m==0)
    return 1;
    return n*power(n,m-1);
}
int main() 
{
  int n1,n2;
  cin>>n1>>n2;
  long long total = 0;
  for(int i=2;i<=n2;i+=2)
  {
    total+=power(n1,i);
  }
  cout<<total<<endl;
    
    return 0;
}