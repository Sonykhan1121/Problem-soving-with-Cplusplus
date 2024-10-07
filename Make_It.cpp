 #include<bits/stdc++.h>
 using namespace std;
 int ispossible[100005];
 bool possible(int n)
 {
    if(n==1)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    if(ispossible[n]!=-1)
    {
        return ispossible[n];
    }

    int add3 = 0;
    int multy2 = 0;
    if(n-3>=1)
    {
        add3 = possible(n-3);

    }
    if(n%2==0)
    {
        multy2 = possible(n/2);
    }


    return ispossible[n]=add3 || multy2;

 }
 int main()
 {

        ispossible[1] = 1;
        memset(ispossible,-1,sizeof(ispossible));
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int now = possible(n);
        if(ispossible[n])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
 }