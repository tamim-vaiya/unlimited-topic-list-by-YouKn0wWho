#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int maxAnd = 0, maxOr = 0, maxXor = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int andValue = i & j;
            int orValue = i | j;
            int xorValue = i ^ j;
            if (andValue < m && andValue > maxAnd)
            {
                maxAnd = andValue;
            }
            if (orValue < m && orValue > maxOr)
            {
                maxOr = orValue;
            }
            if (xorValue < m && xorValue > maxXor)
            {
                maxXor = xorValue;
            }
        }
    }
    cout << maxAnd << nl << maxOr << nl << maxXor << nl;

    return 0;
}