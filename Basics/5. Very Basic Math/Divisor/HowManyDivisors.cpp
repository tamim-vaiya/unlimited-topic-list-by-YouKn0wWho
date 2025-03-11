#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int a, b, c;
int cnt = 0;

void divisors(int n)
{
    for (int i = a; i <= b; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> a >> b >> c;
    divisors(c);
    cout << cnt << nl;

    return 0;
}