#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        int p;
        cin >> p;
        int a[p];
        bool flag = false;
        for (int i = 0; i < p; i++)
            cin >> a[i];
        for (int mask = 0; mask < (1 << p); mask++)
        {
            int sum = 0;
            for (int i = 0; i < p; i++)
            {
                if ((mask >> i) & 1)
                {
                    sum += a[i];
                }
            }
            if (sum == n)
            {
                flag = true;
            }
        }
        (flag) ? cout << "YES" << nl : cout << "NO" << nl;
    }

    return 0;
}