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
        int n, k;
        cin >> n >> k;
        int maxAnd = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                int andValue = i & j;
                if (andValue < k)
                {
                    maxAnd = max(maxAnd, andValue);
                }
            }
        }
        cout << maxAnd << nl;
    }

    return 0;
}