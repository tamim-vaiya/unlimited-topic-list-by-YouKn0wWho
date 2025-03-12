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
        ll n;
        cin >> n;
        ll a = 1, b = n - 1;
        if (a == b)
        {
            cout << a << " " << b << nl;
            continue;
        }
        ll minLcm = INT_MAX, minA, minB;
        while (a <= b)
        {
            ll lcm = (a * b) / gcd(a, b);
            if (minLcm > lcm)
            {
                minLcm = lcm;
                minA = a;
                minB = b;
            }
            a++;
            b--;
        }
        cout << minA << " " << minB << nl;
    }

    return 0;
}