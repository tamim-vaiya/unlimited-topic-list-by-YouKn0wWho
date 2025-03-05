// solved using bitmask

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    int mx = INT_MIN;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sumW = 0, sumV = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                sumW += v[i].first;
                sumV += v[i].second;
            }
        }
        if (sumW <= w)
        {
            mx = max(mx, sumV);
        }
    }
    cout << mx << nl;

    return 0;
}