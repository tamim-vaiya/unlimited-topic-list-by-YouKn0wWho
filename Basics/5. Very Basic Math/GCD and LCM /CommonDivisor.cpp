#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

ll cnt = 0;

void divisors(ll n)
{
    for (int i = 1; i * 1LL * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cnt++;
            }
            else
            {
                cnt += 2;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, g = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        g = gcd(g, x);
    }
    divisors(g);
    cout << cnt << nl;

    return 0;
}