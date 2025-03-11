// Problem link: https://csacademy.com/contest/archive/task/gcd/

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << nl;

    return 0;
}