#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefix[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefix[i + 1] = (a[i] == 0) ? 1 : 0;
        }
        else
        {
            prefix[i + 1] = prefix[i];
            prefix[i + 1] += ((a[i] == 0) ? 1 : 0);
        }
    }
    //   for(int i=1;i<=n;i++)
    //   {
    //     cout<<prefix[i]<<" ";

    //   }
    // cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int now = prefix[r] - prefix[l - 1];
        if (now > 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}