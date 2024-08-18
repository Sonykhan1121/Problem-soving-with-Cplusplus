#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string nm;
    int cls;
    char s;
    int id,math_marks ,eng_marks ;


};
bool compare(Student& a,Student& b)
{
    int sum1 = a.eng_marks+a.math_marks;
    int sum2 = b.eng_marks+b.math_marks;
    if(a.eng_marks==b.eng_marks&&a.math_marks==b.math_marks)
    {
        return a.id<b.id;
    }
    else if(a.eng_marks==b.eng_marks)
    {
        return a.math_marks>b.math_marks;
    }
    else
        return a.eng_marks>b.eng_marks;
    
    
    
}
int main() 
{
    int n;
    cin>>n;
    Student s[n];
    for(int i =0;i<n;i++)
    {
        cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id>>s[i].math_marks>>s[i].eng_marks;

    }
    sort(s,s+n,compare);
    for(int i =0;i<n;i++)
    {
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<" "<<s[i].math_marks<<" "<<s[i].eng_marks<<endl;
    }
    return 0;
}