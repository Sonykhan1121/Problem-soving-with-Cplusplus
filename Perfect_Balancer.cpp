 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n;
    cin>>n;
    long long  ar[n];
    long pre[n],post[n];
    long s = 0;
    for(int i =0;i<n;i++)
    {
        cin>>ar[i];
        s+=ar[i];
        pre[i] = s;
    }
    s=0;
    for(int i =n-1;i>=0;i--)
    {
        s+=ar[i];
        post[i] = s;
    }
    for(int i =0;i<n;i++)
    {
        if(pre[i]==post[i])
        {
            cout<<pre[i]<<" "<<(i+1)<<endl;
            return 0;
        }
    }
    
    cout<<"UNSTABLE"<<endl;
    return 0;
 }