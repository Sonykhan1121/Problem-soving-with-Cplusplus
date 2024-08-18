 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    stack<int> st;
    st.push(10);
    st.push(20);
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    // st.pop();
    if(st.empty())
    {
        cout<<"Empty"<<endl;
    }
    
    return 0;
 }