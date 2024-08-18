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
        int n = s.size();
        stack<char> st;
        for(int i =0;i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(s[i]=='1' && st.top()=='0')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(st.empty())
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