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
        ll a, b;
        cin >> a >> b;
        ll lcm = (a * b) / gcd(a, b);
        if (lcm == b)
        {
            ll n = b / a;
            cout << b * n << nl;
        }
        else
        {
            cout << lcm << nl;
        }
    }

    return 0;
}