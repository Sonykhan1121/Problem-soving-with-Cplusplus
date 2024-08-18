#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int letter[26]= {0};
        int size = s.length();
        for(int i=0;i<size;i++)
        {
            letter[s[i]-'A']++;
        }
        int total = 0;
        for(int i =0;i<26;i++)
        {
            if(letter[i]>0)total+=(letter[i]+1);
        }

        cout<<total<<"\n";
    }
    return 0;
}

