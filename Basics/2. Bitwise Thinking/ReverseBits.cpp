#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void solve()
{
    unsigned int n;
    cin >> n;
    unsigned int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int dig = (n >> i) & 1;
        if (dig)
        {
            ans += (1 << (32 - i - 1));
        }
    }
    cout << ans << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}