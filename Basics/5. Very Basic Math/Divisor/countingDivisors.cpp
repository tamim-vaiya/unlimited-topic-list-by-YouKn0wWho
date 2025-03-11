#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int cnt;

void divisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                cnt++;
            }
            else
            {
                cnt += 2;
            }
        }
    }
}

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
        cnt = 0;
        divisors(n);
        cout << cnt << nl;
    }

    return 0;
}