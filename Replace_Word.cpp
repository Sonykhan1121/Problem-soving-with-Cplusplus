#include <bits/stdc++.h>
using namespace std;
bool match(string &s,int index,string &x)
{
    int size1 = s.length();
    int size2 = x.length();
    if(index+size2<=size1)
    {
        int j =0;
        for(int i = index;i<index+size2;i++,j++)
        {
            if(s[i]!=x[j])
            {
                return false;
            }
        }
        return true;
    }

    return false;

}
int main() 
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        
        string s ,x;
        cin>>s>>x;
        // cout<<s<<" "<<x<<endl;
        
    int size = s.length();
    for(int i =0;i<size;i++)
    {

        if(s[i]==x[0]&&match(s,i,x))
        {
            cout<<"#";
            i+=(x.length()-1);
        }
        else
        {
            cout<<s[i];
        }


    }
    cout<<endl;





    }

    return 0;
}