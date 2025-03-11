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
        ll hcf = gcd(a, b);
        cout << lcm << " " << hcf << nl;
    }

    return 0;
}