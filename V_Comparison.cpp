#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    // cout<<a<<" "<<c<<" "<<b<<endl;
    int result = 0;
    switch (c)
    {
    case '<':
        result = a<b;
        break;
    case '>':
        result = a>b;
        break;
    case '=':
        result = a==b;
        break;
    default:
        break;
    }

    if(result)
    {
        cout<<"Right"<<endl;
    }
    else
    {
        cout<<"Wrong"<<endl;
    }
    return 0;
}