#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int n, m;
int cnt = 0;

void numberOfWays(int cur)
{
    if (cur == m)
    {
        cnt++;
        return;
    }
    if (cur > m)
        return;

    numberOfWays(cur + 1);
    numberOfWays(cur + 2);
    numberOfWays(cur + 3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    numberOfWays(n);
    cout << cnt << nl;

    return 0;
}