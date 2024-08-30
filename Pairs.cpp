 #include<bits/stdc++.h>
 using namespace std;
 class student{
    public:
        string name;
        int score;
        student(string name,int score)
        {
            this->name = name;
            this->score = score;
        }
 };
 bool com(student a , student b)
 {
    if(a.name==b.name)
    {
        return a.score>b.score;
    }
    return a.name<b.name;
 }
 int main()
 {

    int n;
    cin>>n;
    vector<student> v;
    for(int i =0;i<n;i++)
    {
        string s;
        cin>>s;
        int val;
        cin>>val;
        v.push_back(student(s,val));
    }
    sort(v.begin(),v.end(),com);
    for(int i =0;i<n;i++)
    {
        cout<<v[i].name<<" "<<v[i].score<<endl;
    }
    
    
    return 0;
 }