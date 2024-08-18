#include <bits/stdc++.h>
using namespace std;
int main() 
{
   double x,y,z;
   cin>>x>>y>>z;
    double m = (100*x)/(100-y);
    double ans = m + ((z*m)/100);
    cout<<fixed<<setprecision(2)<<ans<<endl;
    return 0;
}