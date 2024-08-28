 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    map<string,int> mp;
    mp.insert({"sony",24});
    mp.insert({"Sadia",20});
    mp.insert({"salim",75});

    if(mp.count("sony"))
    {
        cout<<"Yes present"<<endl;
    }
    else
    cout<<"NO"<<endl;
    
    return 0;
 }