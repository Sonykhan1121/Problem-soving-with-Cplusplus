#include <bits/stdc++.h>
using namespace std;
int * sort_it(int size)
{
    int *a = new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    sort(a,a+size);
    return a;

}
int main() 
{
    int n;
    cin>>n;
    int *a =sort_it(n);
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}