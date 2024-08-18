#include <bits/stdc++.h>
using namespace std;
int main() 
{
  string s;
  cin>>s;
    while(1)
    {
        int index = s.find("EGYPT");
        if(index==-1)
        {
            break;
        }
        s = s.replace(index,5," ");
        


    }
    cout<<s<<endl;

    return 0;
}