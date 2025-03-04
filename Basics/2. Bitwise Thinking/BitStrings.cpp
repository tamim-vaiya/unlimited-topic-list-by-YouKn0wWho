#include <bits/stdc++.h>
using namespace std;

// https://cses.fi/problemset/task/1617
// https://www.youtube.com/watch?v=Qda1zjbca1A&ab_channel=MiketheCoder

#define nl '\n'
#define ll long long
#define MOD 1000000007

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll x = 1;
    for (int i = 0; i < n; i++)
    {
        x = x * 2;
        x = x % MOD;
    }
    cout << x << nl;

    return 0;
}