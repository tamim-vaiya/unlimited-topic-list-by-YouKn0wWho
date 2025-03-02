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
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    cout << abs(sum) << nl;

    return 0;
}