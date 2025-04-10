#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        (isPrime(i)) ? cout << i << " " : cout << "";
    }

    return 0;
}