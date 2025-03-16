#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x;
    cin >> x;
    ll a = 1, mn = LLONG_MAX;
    // cout << mn << nl;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            // cout << mn << nl;

            ll lcm = (x / i * i) / gcd(x / i, i);
            // if (i == 163)
            //     cout << "YES " << mn << " " << x / i << nl;
            if (lcm == x)
            {
                // if (i == 163)
                //     cout << "YES " << mn << " " << x / i << nl;
                if (mn > max(i, x / i))
                {
                    // if (i == 163)
                    //     cout << "YES " << mn << " " << x / i << nl;
                    mn = max(i, x / i);
                    a = i;
                }
            }
        }
    }
    cout << a << " " << x / a << nl;

    return 0;
}