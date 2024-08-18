 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {

    list<string> mylist;
    string now ;
    while(cin>>now)
    {
        if(now=="end")
        {
            break;
        }
        mylist.push_back(now);
    }
    int q ;
    cin>>q;
    auto stand = mylist.begin();
    while(q--)
    {
        string type;
        cin>>type;
        if(type=="visit")
        {
            string address;
            cin>>address;
            bool found = false;
            for(auto i =mylist.begin();i!=mylist.end();i++)
            {
                if(*i==address)
                {
                    stand = i;
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<*stand<<endl;
            }

        }
        else if(type=="prev")
        {
            if(stand==mylist.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                stand--;
                cout<<*stand<<endl;
            }
        }
        else if(type=="next")
        {
            if(stand==prev(mylist.end()))
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                stand++;
                cout<<*stand<<endl;
            }
        }
    }

    
    return 0;
 }