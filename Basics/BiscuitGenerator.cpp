#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t;
    cin >> a >> b >> t;
    cout << (t / a) * b << nl;

    return 0;
}