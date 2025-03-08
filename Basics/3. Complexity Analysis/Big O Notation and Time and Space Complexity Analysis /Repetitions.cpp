#include <bits/stdc++.h>
#include <map>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int mx = 1, cnt = 1;
    if (s.size() == 1)
    {
        cout << mx << nl;
        return 0;
    }
    for (int i = 1; i < s.size(); i++)
    {
        (s[i] == s[i - 1]) ? cnt++ : cnt = 1;
        mx = max(cnt, mx);
    }
    cout << mx << nl;

    return 0;
}