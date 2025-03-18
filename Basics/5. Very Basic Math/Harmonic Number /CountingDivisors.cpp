#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

const int N = 1e6 + 9;
int d[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            d[j]++;
        }
    }

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        cout << d[n] << nl;
    }

    return 0;
}