#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int a = 12, b = 18;
    int a, b;
    cin >> a >> b;
    int lcm = (a * b) / gcd(a, b);
    cout << lcm << nl;

    return 0;
}