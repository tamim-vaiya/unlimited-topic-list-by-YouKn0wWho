#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int sz = max(s1.size(), s2.size());
        for (int i = 0; i < sz; i++)
        {
            if (i < s1.size())
                cout << s1[i];
            if (i < s2.size())
                cout << s2[i];
        }
        cout << nl;
    }

    return 0;
}