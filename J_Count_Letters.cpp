 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    string s ;
    cin>>s;
    // cout<<s<<endl;
    vector<int> letter(26);
    for(int i=0;i<s.length();i++)
    {
        letter[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
       if(letter[i]>0)
       {

        cout<<char(i+'a')<<" : "<<letter[i]<<endl;
       }
    }

    return 0;
 }