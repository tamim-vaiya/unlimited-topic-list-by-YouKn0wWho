// Got TLE with this problem. Will try tomorrow. Need to do sehri now.

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
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        while (n % m != 0)
        {
            cnt++;
            n++;
        }
        cout << cnt << nl;
    }

    return 0;
}