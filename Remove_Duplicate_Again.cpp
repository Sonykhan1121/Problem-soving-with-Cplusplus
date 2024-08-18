 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    list<int> mylist;
    int value;
    while(cin>>value)
    {
        if(value==-1)
        {
            break;
        }
        mylist.push_back(value);
    }
    mylist.sort();
    auto i = mylist.begin();
    while(i!=mylist.end())
    {
        int now = *i;
        
        while(next(i,1)!=mylist.end() && now==*next(i,1))
        {
            i++;
        }
        cout<<*i<<" ";
        i++;
    }
    
    return 0;
 }