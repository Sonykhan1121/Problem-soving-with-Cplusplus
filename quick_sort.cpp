 #include<bits/stdc++.h>
 using namespace std;
 int partition(vector<int> &nums,int low, int high)
    {
        int pivot = nums[high];
        int i = low-1;
        for(int j = low;j<high;j++)
        {
            if(nums[j]<pivot)
            {
                i++;
                swap(nums[j],nums[i]);
            }
        }
        swap(nums[i+1],nums[high]);
        return i+1;


    }
    void quick_sort(vector<int> &nums,int low,int high)
    {
        if(low<high)
        {
            int p =  partition(nums,low,high);
            quick_sort(nums,low,p-1);
            quick_sort(nums,p+1,high);

        }
    }
 int main()
 {

    
    
    return 0;
 }