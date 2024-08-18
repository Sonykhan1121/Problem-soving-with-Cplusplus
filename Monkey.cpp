#include <bits/stdc++.h>

using namespace std;
int main() 
{
    char s[100005] ;
    while(cin.getline(s,100005))
    {
    
        // cout<<s<<endl;
        int n = strlen(s);
        int letter[26] = {0};
        for( int i =0;i<n;i++)
        {
            letter[s[i]-97]++;
        }
        for(int i =0;i<26;i++)
        {
            if(letter[i]>0)
            {

                while(letter[i]>0)
                {

                    cout<<char('a'+i);
                    letter[i]--;
                }


            }
        }

        
        cout<<endl;
    }
    return 0;
}