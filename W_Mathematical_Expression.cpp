#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int a,b,c;
   char sign,equal;
   cin>>a>>sign>>b>>equal>>c;
   int result = 0;
   switch (sign)
   {
   case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
   default:
    break;
   }
   if(result ==c)
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<result<<endl;
   }
    return 0;
}