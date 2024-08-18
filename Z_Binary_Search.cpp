 #include<bits/stdc++.h>
 using namespace std;
 bool search(vector<int> &v,int value)
 {

    int low = 0,high = v.size()-1;
    while(low<=high)
    {
        int mid = low +(high-low)/2;
        if(v[mid]==value)
        {   
            return true;
        }
        else if(v[mid]>value)
        {
            high = mid-1;
        }
        else 
            low = mid+1;
    }







    return false;
 }
 int main()
 {

    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<q;i++)
    {
        int value;
        cin>>value;
        if(search(v,value))
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    
    return 0;
 }