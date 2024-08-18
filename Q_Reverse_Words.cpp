#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    int size = s.size();
    string now ;
    bool first = true;
    while(ss>>now)
    {
        if(!first)
        {
            cout<<" ";
        }
        int i = now.size()-1;
        while(i>=0)
        {
            cout<<now[i];
            i--;
        }
        first = false;
       
    }

    return 0;
}