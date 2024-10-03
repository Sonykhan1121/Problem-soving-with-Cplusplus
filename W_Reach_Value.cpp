 #include<bits/stdc++.h>
 using namespace std;
 bool go(long long start,long long end)
 {
    if(start==end)
    {
        return true;
    }
    if(start>end)
    {
        return false;
    }


    bool multiwith10 = go(start*10,end);
    bool multiwith20 = go(start*20,end);
    return multiwith10||multiwith20;
 }
 int main()
 {

    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n;
        cin>>n;

        bool check =go(1,n);
        if(check)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    
    return 0;
 }