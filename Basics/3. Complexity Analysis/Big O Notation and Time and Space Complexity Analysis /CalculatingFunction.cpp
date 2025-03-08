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
    // cout << ((n * (n + 1)) / 2) - (2 * pow(2, (ceil((float)n / 2)))) << nl; // Don't work. Hehe.

    (n & 1) ? cout << -((n + 1) / 2) << nl : cout << n / 2 << nl;

    return 0;
}