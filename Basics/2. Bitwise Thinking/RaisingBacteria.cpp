#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << __builtin_popcount(n) << nl;

    return 0;
}