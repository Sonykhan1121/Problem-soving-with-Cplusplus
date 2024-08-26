 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    vector<int> ans ;

    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int value;
    cin>>value;
    ans.push_back(value);
    int current = ans.size()-1;
    while(current!=0)
    {
        int prev = (current-1)/2;
        if(ans[prev]<ans[current])
        {
            swap(ans[prev],ans[current]);

        }
        else
        break;
        current = prev;

    }
    }
    
    for(auto i: ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
 }