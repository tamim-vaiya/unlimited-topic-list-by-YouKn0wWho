#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void weirdAlgo(ll n)
{
    if (n == 1)
    {
        cout << 1 << nl;
        return;
    }
    cout << n << " ";
    if (n & 1)
        weirdAlgo((n * 3) + 1);
    else
        weirdAlgo(n / 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    weirdAlgo(n);

    return 0;
}