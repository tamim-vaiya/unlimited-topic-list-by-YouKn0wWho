#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << a[0] << nl;
        return 0;
    }
    ll mn = INT_MAX;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll gp1 = 0, gp2 = 0, cntg1 = 0, cntg2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                gp1 += a[i];
                cntg1++;
            }
            else
            {
                gp2 += a[i];
                cntg2++;
            }
        }
        if (cntg1 > 0 && cntg2 > 0)
        {
            mn = min(mn, abs(gp1 - gp2));
        }
    }
    cout << mn << nl;

    return 0;
}