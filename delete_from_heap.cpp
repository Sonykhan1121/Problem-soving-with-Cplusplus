 #include<bits/stdc++.h>
 using namespace std;
 void insert_into_heap(vector<int> & v, int x)
 {
    v.push_back(x);
    int current = v.size()-1;
    while(current!=0)
    {
        int prev = (current-1)/2;
        if(v[prev]<v[current])
        {
            swap(v[prev],v[current]);

        }
        else
        break;
        current = prev;

    }
 }
 void delete_heap(vector<int> &v)
 {
    v[0] = v[v.size()-1];
    v.pop_back();
    int curr = 0;
    while(true)
    {
        int left = curr*2+1;
        int right = curr*2 +2;
        if(left<v.size()&&right<v.size())
        {
            if(v[left]>=v[right]&&v[left]>v[curr])
            {
                swap(v[left],v[curr]);
                curr = left;
            }
            else if(v[right]>=v[left]&&v[right]>v[curr])
            {
                swap(v[right],v[curr]);
                curr = right;
            }
            else
            break;
        }
        else if(left<v.size())
        {
            if(v[left]>v[curr])
            {
                swap(v[left],v[curr]);
                curr = left;
            }
            else
            break;
        }
        else if(right<v.size())
        {
            if(v[right]>v[curr])
            {
                swap(v[right],v[curr]);
                curr = right;
            }
            else
            {
                break;
            }
        }
        else
        break;
    }
 }
 void print_heap(vector<int> v)
 {
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }
 int main()
 {
    vector<int> a;
    int n;
    cin>>n;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_into_heap(a,x);
    }
    print_heap(a);
    delete_heap(a);
    print_heap(a);

    return 0;
 }