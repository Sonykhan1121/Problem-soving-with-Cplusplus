 #include<bits/stdc++.h>
 using namespace std;

 bool IsPossible(int n,int ar[],long long x)
 {  
    if(x==0&&n==0)
    {
        return true;
    }
    if(n<1)
    {
        return false;
    }

    bool plus = IsPossible(n-1,ar,x+ar[n-1]);
    bool minus = IsPossible(n-1,ar,x-ar[n-1]);
    return plus || minus;
 }
 int main()
 {

    int n;
    long long x;
    cin>>n>>x;
    int ar[n];
    for(int  i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(IsPossible(n,ar,x))
    {
        cout<<"YES"<<endl;    
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
    return 0;
 }