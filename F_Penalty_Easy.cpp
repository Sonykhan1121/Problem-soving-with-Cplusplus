 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        int a, b;
        cin>>a>>b;
        if(a-b>1 || b-a>2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
 }