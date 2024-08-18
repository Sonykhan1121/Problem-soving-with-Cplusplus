#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {   
        int n;
        cin>>n;
        int a[n];
        int mx = -1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mx = max(mx,a[i]);
        }
        cout<<mx<<endl;


    }
    return 0;
}