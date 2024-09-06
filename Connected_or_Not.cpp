 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n,m;
    cin>>n>>m;
    set<pair<int,int>> st;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
       st.insert({a,b});

    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(st.find({a,b})!=st.end())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
 }