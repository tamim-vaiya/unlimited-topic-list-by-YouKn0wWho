#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

ll n;
bool flag;

void mul(ll m)
{
    if (m == n)
    {
        flag = true;
        return;
    }
    if (m > n)
    {
        return;
    }
    mul(m * 10);
    mul(m * 20);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        cin >> n;
        flag = false;
        mul(1);
        (flag) ? cout << "YES" << nl : cout << "NO" << nl;
    }

    return 0;
}