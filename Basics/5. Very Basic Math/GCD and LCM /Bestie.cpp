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
        int n, g = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            g = gcd(g, v[i]);
        }
        if (g == 1)
        {
            cout << 0 << nl;
        }
        else if (gcd(g, n) == 1)
            cout << 1 << nl;
        else if (gcd(g, n - 1) == 1)
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }

    return 0;
}

/*
    Let's make an important observation: for any value of n, we have:

        gcd(n - 1, n) = 1

    Moreover, the cheapest operations involve choosing i = n - 1 and i = n.
    From this, we can conclude that the answer is at most 3.

    Now, let g be the greatest common divisor (gcd) of all numbers in the array.
    We analyze the following cases:

    1. If g = 1, no operation is needed, so the answer is 0.
    2. Otherwise, try the cheapest operation, choosing i = n.
       - If gcd(g, n) = 1, then the answer is 1.
    3. If that doesn't work, try the next cheapest operation, choosing i = n - 1.
       - If gcd(g, n - 1) = 1, then the answer is 2.
    4. If neither of the above cases hold, we know that:

        gcd(g, n - 1, n) = 1

       which guarantees that the answer is 3.

    Thus, the final answer is at most 3 in all cases.
*/
