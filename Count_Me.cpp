 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {

    int tc;
    cin>>tc;
    
    cin.ignore();
    while(tc--)
    {
        map<string,int> mp;
        string now;
        getline(cin,now);
        // cout<<now<<endl;
        stringstream ss(now);
        int maxvalue = -1;
        string ans = "";
        string word;
        while(ss>>word)
        {
            
            mp[word]++;
            if(mp[word] > maxvalue)
            {
                ans = word;
                maxvalue = mp[word];
            }
        }
        cout<<ans<<" "<<maxvalue<<endl;

    }
    
    return 0;
 }