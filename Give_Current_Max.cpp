 #include<bits/stdc++.h>
 using namespace std;
 class student
 {  
    public:
        string name;
        int roll,marks;
        student(string name,int roll, int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }

 };
 class cm{
    public:
        bool operator()(student a , student b)
        {
            if(a.marks==b.marks)
            {
                return a.roll>b.roll;
            }
            return a.marks<b.marks;

        }
 };
 int main()
 {

    int tc;
    cin>>tc;
    priority_queue<student,vector<student>,cm> pq;
    while(tc--)
    {
        string name;
        cin>>name;
        int roll,marks;
        cin>>roll>>marks;
        pq.push(student(name,roll,marks));

    }
    int q;
    cin>>q;
    while(q--)
    {
        int type;
        cin>>type;
        if(type==1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(type==2)
        {
            if(!pq.empty())
            pq.pop();

            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }

        }
        else
        {
            string name;
            int roll, marks;
            cin>>name>>roll>>marks;
            pq.push(student(name,roll,marks));

            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }

    }
    
    return 0;
 }