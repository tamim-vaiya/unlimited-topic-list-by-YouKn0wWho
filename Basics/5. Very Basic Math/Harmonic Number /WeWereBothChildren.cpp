#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

// Took a little help from tutorial

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
            {
                cnt[x]++;
                // cout << x << "->" << cnt[x] << nl;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                mx[j] += cnt[i];
                // cout << "j -> " << j << " mx[j] -> " << mx[j] << " i -> " << i << " cnt[i] -> " << cnt[i] << nl;
            }
        }
        cout << *max_element(mx.begin(), mx.end()) << nl;
    }

    return 0;
}