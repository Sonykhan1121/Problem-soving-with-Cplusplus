#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id,total_marks;
    char name[120];
    char section;
    Student(int id,char name[],char section,int total_marks)
    {
        this->id = id;
        strcpy(this->name,name);
        this->section = section;
        this->total_marks = total_marks;
    }
    
};
int main() 
{
    int tc;
    cin>>tc;
    while(tc>0)
    {
        
        
            int id,total_marks;
            char name[120];
            char section;
            int a[3],ida[3];
            cin>>id>>name>>section>>total_marks;
            Student s1(id,name,section,total_marks);
            ida[0] = s1.id;
            a[0] = s1.total_marks;
            cin>>id>>name>>section>>total_marks;
            Student s2(id,name,section,total_marks);
            ida[1] = s2.id;
           a[1] = s2.total_marks;
            cin>>id>>name>>section>>total_marks;
            Student s3(id,name,section,total_marks);
            ida[2] = s3.id;
            a[2] = s3.total_marks;
            sort(a,a+3,greater<>());
            sort(ida,ida+3);
        //    for(int i=0;i<3;i++)
        //    {
        //     cout<<a[i]<<endl;
        //    }
           if(a[0]==a[1]&&a[0]==a[2])
            {
                if(ida[0]==s1.id&&s1.total_marks==a[0])
                {
                    cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
                }
                else if(ida[0]==s2.id&&s2.total_marks==a[0])
                {
                    cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;

                }
                else if(ida[0]==s3.id&&s3.total_marks==a[0])
                {
                    cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
                }
            }   
            else if(a[0]==a[1])
            {
                if(ida[0]==s1.id&&s1.total_marks==a[0])
                {
                    cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
                }
                else if(ida[0]==s2.id&&s2.total_marks==a[0])
                {
                    cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;

                }
                else if(ida[0]==s3.id&&s3.total_marks==a[0])
                {
                    cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
                }
                else if(ida[1]==s1.id&&s1.total_marks==a[0])
                {
                    cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
                }
                else if(ida[1]==s2.id&&s2.total_marks==a[0])
                {
                    cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;

                }
                else if(ida[1]==s3.id&&s3.total_marks==a[0])
                {
                    cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
                }
                else if(ida[2]==s1.id&&s1.total_marks==a[0])
                {
                    cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
                }
                else if(ida[2]==s2.id&&s2.total_marks==a[0])
                {
                    cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;

                }
                else if(ida[2]==s3.id&&s3.total_marks==a[0])
                {
                    cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
                }
            }
            else
            {
                if(s1.total_marks==a[0])
                {
                    cout<<s1.id<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_marks<<endl;
                }
                else if(s2.total_marks==a[0])
                {
                    cout<<s2.id<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_marks<<endl;

                }
                else if(s3.total_marks==a[0])
                {
                    cout<<s3.id<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_marks<<endl;
                }
            }     





        tc--;
    }
    return 0;
}