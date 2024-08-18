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
        int goals[n];
        int fouls[n];
        for(int i =0;i<n;i++)
        {
            cin>>goals[i];
        }
        int ans = 0;
        for(int i =0;i<n;i++)
        {
            cin>>fouls[i];
            ans = max(ans,goals[i]*20 - fouls[i]*10);
        }
        cout<<ans<<endl;


    }
    
    return 0;
 }