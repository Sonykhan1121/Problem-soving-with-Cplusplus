 #include<bits/stdc++.h>
 using namespace std;
 void print(list<int> mylist)
 {
    cout<<"L -> ";
    for(auto i =mylist.begin();i!=mylist.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"R -> ";
    for(auto i =prev(mylist.end());i!=prev(mylist.begin(),1);i--)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
 }
 int main()
 {

    list<int> mylist;

    int tc ;
    cin>>tc;
    while(tc--)
    {
        int index,val;
        cin>>index>>val;
        if(index==0)
        {
            mylist.push_front(val);
            print(mylist);
        }
        else if(index==1)
        {
            mylist.push_back(val);
            print(mylist);
        }
        else
        {
            index = val;
            int size = mylist.size();
            if(index>=0 && index<size)
            {
                auto del = next(mylist.begin(),index);
                mylist.erase(del);
            }
            print(mylist);
        }
        

    }
    
    return 0;
 }