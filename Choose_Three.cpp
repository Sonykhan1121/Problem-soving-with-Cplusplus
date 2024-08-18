#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        int n,mySum;
        cin>>n>>mySum;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        bool find = false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k = j+1;k<n;k++)
           {
                if(mySum==a[i]+a[j]+a[k])
                    {
            find = true;
                        break;
                    }
                }
            }
        } for(int i=0;i<n;i+=1)
        {
            for(int j=i+1;j<n;j+=1)
            {
                for(int k = j+1;k<n;k++)
           {
                if(mySum==a[i]+a[j]+a[k])
                    {
            find = true;
                        break;
                    }
                }
            }
        }
        if(find)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



        tc--;
    }
    return 0;
}