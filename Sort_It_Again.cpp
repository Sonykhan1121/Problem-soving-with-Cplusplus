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
    
    return 0;
}