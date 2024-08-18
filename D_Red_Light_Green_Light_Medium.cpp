 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int cnt =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>k)
            cnt++;
        }
        cout<<cnt<<endl;

    }
    
    return 0;
 }