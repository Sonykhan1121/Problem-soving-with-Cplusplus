 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n,q;
    cin>>n>>q;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<long long> prefix(n+1,0L);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            prefix[i+1] = v[i];
        }
        else
        {
            prefix[i+1]=prefix[i];
            prefix[i+1]+=v[i];
        }

    }
    for(int i=0;i<q;i++)
    {
        int l ,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l-1]<<endl;

    }
    
    return 0;
 }