 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n ;
    cin>>n;
    int arr[n];
    bool taken[n]= {false};
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<(n/2);i++)
    {
        int min = 100000;
        int max = -100000;
        int min_index = -1;
        int max_index = -1;
        for(int i =0;i<n;i++)
        {
            if(!taken[i])
            {
                if(arr[i]<min)
                {
                    min = arr[i];
                    min_index = i;
                }
                if(arr[i]>=max)
                {
                    max = arr[i];
                    max_index = i;
                }
                
            }
        }
        taken[min_index] = true;
                taken[max_index] = true;
        cout<<min_index+1<<" "<<max_index+1<<endl; 
    }

    
    return 0;
 }