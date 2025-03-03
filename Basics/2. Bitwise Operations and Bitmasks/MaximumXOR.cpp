#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    cin >> l >> r;
    int max_xor = 0;
    for (int i = l; i <= r; i++)
    {
        for (int j = l; j <= r; j++)
        {
            if ((i ^ j) > max_xor)
            {
                max_xor = i ^ j;
            }
        }
    }
    cout << max_xor << nl;

    return 0;
}