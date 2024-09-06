 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n,m;
    cin>>n>>m;
    vector<int> ar[n];
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    for(int i =0;i<n;i++)
    {
        sort(ar[i].begin(),ar[i].end(),greater<>());
    }
    int q;
    cin>>q;
    while(q--)
    {
        int node;
        cin>>node;
        if(ar[node].empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(auto i:ar[node])
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
 }