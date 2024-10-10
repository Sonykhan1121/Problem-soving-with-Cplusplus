 #include<bits/stdc++.h>
 using namespace std;
 int unbounded_knap(int n,int s,int val[],int weight[])
 {
    if(n==0||s==0)
    {
        return 0;
    }

    int cha1 = 0;
    if(weight[n-1]<=s)
    {
     cha1 = val[n-1]+unbounded_knap(n,s-weight[n-1],val,weight);
    }
    int cha2 = unbounded_knap(n-1,s,val,weight);
    return max(cha1,cha2);

 }
 int main()
 {

    int n,s;
    cin>>n>>s;
    int val[n],weight[n];
    for(int i =0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
   
    cout<<unbounded_knap(n,s,val,weight);
    return 0;
 }