 #include<bits/stdc++.h>
 using namespace std;
 long long sum(long long i)
 {
    
    if(i%2==0)
    {
        long long n = i/2;
        return (n*(n+1));
    }
    else
    {
        long long n = i/2;
        return (n*(n+1))+((i+1)/2);
    }
 }
 int main()
 {

    int n,q;
    cin>>n>>q;
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<sum(r)-sum(l-1)<<endl;
    }
    // cout<<sum(7);
    
    return 0;
 }