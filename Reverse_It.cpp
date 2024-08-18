#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;

};
int main() 
{
  
    int n;
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id;

    }
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        swap(s[i].s,s[j].s);
        i++;
        j--;
    }
    for(int i =0;i<n;i++)
    {
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<endl;
    }
    return 0;
}