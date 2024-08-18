#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n;
   cin>>n;
   int a[26]={0};
   for(int i=0; i<n; i++)
   {
    char c;
    cin>>c;
    a[c-'a']++;
   }
   for(int i=0;i<26;i++)
   {
    while(a[i]>0)
    {
        cout<<(char)(i+'a');
        a[i]--;
    }
   }
    return 0;
}