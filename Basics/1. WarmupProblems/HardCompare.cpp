#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void hardCompare(ll a, ll b, ll c, ll d)
{
    if (b * log(a) > d * log(c))
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    hardCompare(a, b, c, d);

    return 0;
}