#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int digitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;
    int sum, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = digitSum(i);
        if (sum >= a && sum <= b)
        {
            ans += i;
        }
    }

    cout << ans << nl;

    return 0;
}