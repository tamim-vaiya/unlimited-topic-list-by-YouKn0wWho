#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll sum = n * (n + 1) / 2;
        // cout << "Sum: " << sum << nl;
        int i = 0;
        while (true)
        {
            if (pow(2, i) > n)
                break;
            // cout << "Pow: " << pow(2, i) * 2 << nl;
            sum -= pow(2, i) * 2;
            i++;
        }
        cout << sum << nl;
    }

    return 0;
}