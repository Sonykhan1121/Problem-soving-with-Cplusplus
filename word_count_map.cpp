 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    map<string,int> mp;
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    while(ss>>word)
    {
        // cout<<word<<endl;
        mp[word]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;  // printing word and its frequency
    }
    
    return 0;
 }