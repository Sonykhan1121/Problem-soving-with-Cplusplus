#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n ;
    cin>>n;
    int ar[n];
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
    }
    int left_Min[n],right_Min[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            left_Min[i]=ar[i]-(i+1);
        }
        else
        {
            left_Min[i]=min(ar[i]-(i+1),left_Min[i-1]);
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            right_Min[i]=ar[i]+(i+1);
        }
        else
        {
            right_Min[i] = min(right_Min[i+1],ar[i]+(i+1));
        }
    }
    
    int ans= __INT_MAX__;
    for(int i=0;i<n-1;i++)
    {   
        ans = min(ans,left_Min[i]+right_Min[i+1]);

    }
    cout<<ans<<endl;
    }
    return 0;
}