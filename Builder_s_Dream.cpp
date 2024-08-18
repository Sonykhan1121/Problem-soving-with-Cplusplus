#include <bits/stdc++.h>
using namespace std;
bool possible(int a[],int n,long long int taka,long long int min_piler_height)
{
    long long int min_taka_need  = 0;
    if(min_piler_height<a[0])
    {
        return false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min_piler_height)
        {
            min_taka_need+=min_piler_height-a[i];
        }
    }



    // cout<<min_taka_need<<"min taka"<<endl;
    if(min_taka_need<=taka)
    {
        return true;
    }

    return false;
}
int main() 
{
  int n;
  long long k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];

  }
  sort(a,a+n);
//   cout<<a<<endl;
    long long int low = a[0], high = a[n-1]+k;
    long long int ans= a[0];
    while(low<=high)
    {
        long long int mid = low +(high-low)/2;
        if(possible(a,n,k,mid))
        {
            // cout<<k<<" "<<mid<<endl;
            ans = max(ans,mid);
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }

    }
    cout<<ans<<endl;

    return 0;
}