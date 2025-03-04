// My Solution

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int TotalBits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt++;
        n >>= 1;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, ans;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < size(s); i++)
    {
        if (flag && s[i] == '0')
        {
            flag = false;
            continue;
        }
        ans.push_back(s[i]);
    }
    if (flag)
    {
        for (int i = 0; i < size(ans) - 1; i++)
        {
            cout << ans[i];
        }
    }
    else
    {
        cout << ans << nl;
    }

    return 0;
}

// // another solution got from online
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int c = s.find('0');
//     if (c == -1)
//         cout << s.substr(1) << endl;
//     else
//         cout << s.substr(0, c) << s.substr(c + 1) << endl;
//     return 0;
// }