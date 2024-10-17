#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int tc;
    cin >> tc;

    unordered_map<int, int> mp;
    multiset<pair<int, int>> st;

    while (tc--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int value;
            cin >> value;

            if (mp[value] > 0)
            {
                st.erase(st.find({mp[value], value}))   ; 
            }
            mp[value]++;
            st.insert({mp[value], value}); 
        }
        else if(type==2)
        {
            if (st.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                auto last = prev(st.end());
                int ans = last->second;
                cout << ans << "\n";

                st.erase(last);
                
                mp[ans]-=max(1,mp[ans]-1);

                if (mp[ans] > 0)
                {
                    st.insert({mp[ans], ans});
                }
            }
        }
    }

    return 0;
}
