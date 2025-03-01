#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int cnt = 0;

    for (int j = 2; j <= n; j++)
    {
        int div = 0;
        for (int i = 2; i < j; i++)
        {

            if (isPrime(i))
            {
                (j % i == 0) ? div++ : div;
            }
        }
        if (div == 2)
        {
            cnt++;
        }
    }

    cout << cnt << nl;

    return 0;
}