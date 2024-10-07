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
        int arr[n];
        int oneindex = -1,anotherindex= -1;
        int mx =INT_MIN;

        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
            if(mx<arr[i])
            {
                mx = max(mx,arr[i]);
                oneindex = i;
            }

        }
        int mn = INT_MAX;
        for(int i =0;i<n;i++)
        {
            if(i!=oneindex)
            {
                int dif = arr[oneindex] - arr[i];
            if(mn>dif)
            {
                mn = min(mn,dif);
                anotherindex = i;
            }
            }
        }
        cout<<min(oneindex,anotherindex)<<" "<<max(oneindex,anotherindex)<<endl;

    }
    
    return 0;
 }