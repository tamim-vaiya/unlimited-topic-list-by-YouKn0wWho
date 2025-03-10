#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int fibo(int n)
{
    if (n <= 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    n--;
    cout << fibo(n) << nl;

    return 0;
}