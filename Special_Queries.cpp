 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    queue<string> q;
    while(tc--)
    {
        int type ;
        string name;
        cin>>type;
        if(type==1)
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        else
        {
            cin>>name;
            q.push(name);
        }


    }
    
    return 0;
 }