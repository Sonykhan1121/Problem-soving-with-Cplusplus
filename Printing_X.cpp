 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n;
    cin>>n;
    int space =n/2;
    int left = 0;
    int right = space*2-1;
    for(int i=0;i<space;i++)
    {
        
        for(int j =0;j<left;j++)
        {
            cout<<" ";
        }
        cout<<"\\";
        for(int j =0;j<right;j++)
        {
            cout<<" ";

        }
        cout<<'/'<<endl;
        left++;
        right-=2;
    }
    for(int i = 0;i<space;i++)
    {
        cout<<" ";
    }
    cout<<"X"<<endl;
    left = space-1;
    right = 1;
    for(int i=0;i<space;i++)
    {
        
        for(int j =0;j<left;j++)
        {
            cout<<" ";
        }
        cout<<"/";
        for(int j =0;j<right;j++)
        {
            cout<<" ";

        }
        cout<<'\\'<<endl;
        left--;
        right+=2;
    }
    
    return 0;
 }