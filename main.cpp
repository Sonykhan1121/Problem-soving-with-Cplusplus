 #include<bits/stdc++.h>
 using namespace std;
 void find_smaller_than_left_right(vector<int> a )
 {
   int size = a.size();
   for(int i = 0;i<size;i++)
   {
      if(i-1>=0&&i+1<size&&a[i-1]>a[i]&&a[i]<a[i+1])
      {
         cout<<a[i]<<" ";
      }
   }
 }
 void find_sum_of_right_side_elements(vector<int> a)
 {
   int size = a.size();
   int sum = 0;
   int suffix[size]={0};
   for(int i=size-1;i>=0;i--)
   {  
      suffix[i] = sum;
      sum+=a[i];
   }
   for(int i =0;i<size;i++)
   {
      cout<<suffix[i]<<" ";
   }
   cout<<endl;
 }
 void problem_3()
 {
      int tc;
      cin>>tc;
      vector<int> a;
      while(tc--)
      {
         int type ,val;
         cin>>type>>val;
         if(a.empty())
         {
            a.push_back(val);
      }
         else if(type==1)
         {
            a.insert(a.begin()+1,val);
         }
         else if(type==2)
         {
            a.insert(a.end()-1,val);
         }
      
 }
 for(auto i:a)
      {
         cout<<i<<' ';
      }
 }
 int main()
 {

   //  vector<int> a;
   // int n;
   // cin>>n;
   // for(int i =0;i<n;i++)
   // {
   //     int x;
   //     cin>>x;
   //     a.push_back(x);
  
   // }
   //  find_smaller_than_left_right(a);
   //   find_sum_of_right_side_elements(a);
   problem_3();
    return 0;
 }