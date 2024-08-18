 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    
    int n;
    cin>>n;
    vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);

    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);

    }

    for(int i=0;i<n;i++)
    {
        v2.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

    return 0;
 }