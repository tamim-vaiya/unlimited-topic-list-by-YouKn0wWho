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
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                sum += a[i];
            }
            else
            {
                sum -= a[i];
            }
        }
        if (sum % 360 == 0)
        {
            cout << "YES" << nl;
            return 0;
        }
    }
    cout << "NO" << nl;

    return 0;
}