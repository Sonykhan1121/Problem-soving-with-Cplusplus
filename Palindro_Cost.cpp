#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s ;
        int have;
        cin>>s>>have;
        // cout<<s<<" "<<have<<endl;
        int left = 0,right = s.size()-1;
        int need =0;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
                int dif = abs(s[right]-s[left]);
                need+=dif;
            }

            left++;
            right--;
        }
        if(have>=need)
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