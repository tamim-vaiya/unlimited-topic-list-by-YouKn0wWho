#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i <= c; i += a)
    {
        for (int j = 0; j <= c; j += b)
        {
            if (i + j == c)
            {
                cout << "Yes" << nl;
                return 0;
            }
        }
    }
    cout << "No" << nl;

    return 0;
}