#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int equation(int x, int n)
{
    int sum = 0;
    for (int i = 2; i < n; i += 2)
    {
        sum += pow(x, i);
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    cout << equation(x, n) << nl;

    return 0;
}