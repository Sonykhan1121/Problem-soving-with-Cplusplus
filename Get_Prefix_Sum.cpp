 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long> prefix(n,0);
    /* This code snippet is calculating the prefix sum of the input array `v`. */
    prefix[0]=v[0];
    for(int i =1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+v[i];
    }
    /* The code snippet `for(int i=n-1;i>=0;i--) { cout<<prefix[i]<<" "; }` is iterating through the
    `prefix` array in reverse order starting from the last element (`n-1`) down to the first element
    (`0`). During each iteration, it prints the value of the `prefix` array at index `i` followed by
    a space. This effectively outputs the prefix sum values in reverse order. */
    for(int i=n-1;i>=0;i--)
    {
        cout<<prefix[i]<<" ";
    }

    
    return 0;
 }