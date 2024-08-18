 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;
        int n = s.length();
        int cng=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            continue;
            else
            {
                cng++;
                while(i+1<n && s[i+1]=='1')
                {
                    i++;
                }
            }
        }
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
        }
        if(zero==n)
        {
            cout<<"NO"<<endl;
        }
        else if(cng==1)
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