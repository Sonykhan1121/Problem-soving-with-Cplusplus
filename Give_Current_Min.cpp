 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n;
    cin>>n;
    priority_queue<int,vector<int> ,greater<int>> pq;
    while(n--)
    {
        int val;
        cin>>val;
        pq.push(val);

    }
    int q;
    cin>>q;
    for(int i =0;i<q;i++)
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
                cout<<pq.top()<<endl;
        }
        else if(type==2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
                cout<<pq.top()<<endl;
        }
        else
        {
            int val;
            cin>>val;
            pq.push(val);
            cout<<pq.top()<<endl;
        }
    }
    
    return 0;
 }