 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        long long  ar[n];
        long long s=0;
        for(int i =0;i<n-2;i++)
        {
            cin>>ar[i];
            s+=ar[i];
        }
        long long ps ;
        cin>>ps;
        cout<<(ps-s+1)<<endl;
    }
    
    return 0;
 }