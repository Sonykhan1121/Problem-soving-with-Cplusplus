#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s,js= "Jessica";
    getline(cin,s);
    stringstream ss(s);
    string now;
    bool find = false;
    while(ss>>now)
    {
        if(now==js)
        {
            find = true;
            break;
        }
    }
    if(find)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}