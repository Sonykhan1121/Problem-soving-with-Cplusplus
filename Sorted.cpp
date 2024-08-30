 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        set<int> st;
    vector<int> a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(int i =0;i<n;i++)
    {
        if(st.count(a[i]))
        {
            cout<<a[i]<<" ";
            st.erase(a[i]);
        }
    }
        cout<<endl;
    }
    
    return 0;
 }