#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l, r, x;
    int cnt = 0;
    cin >> n >> l >> r >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++)
        cin >> c[i];

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0, mx = 0, mn = 1e9;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                sum += c[i];
                mx = max(mx, c[i]);
                mn = min(mn, c[i]);
            }
        }
        if (sum >= l && sum <= r)
        {
            if (mx - mn >= x)
                cnt++;
        }
    }
    cout << cnt << nl;

    return 0;
}