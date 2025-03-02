#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int a = 0; a <= k; a++)
    {
        for (int b = 0; b <= k; b++)
        {
            int c = s - a - b;
            if (c >= 0 && c <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << nl;

    return 0;
}