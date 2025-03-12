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
        ll l, r;
        cin >> l >> r;
        if (2 * l > r)
            cout << -1 << " " << -1 << nl;
        else
            cout << l << " " << 2 * l << nl;
    }

    return 0;
}

//
//
//
//
//

// wrong ans;

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         ll l, r;
//         cin >> l >> r;
//         bool flag = false;
//         for (ll x = l; x <= r; x++)
//         {
//             (flag) ? x = r + 1 : x;
//             for (ll y = x + 1; y <= r; y++)
//             {
//                 (flag) ? y = r + 1 : y;
//                 ll lcm = (x * y) / gcd(x, y);
//                 if (lcm >= l && lcm <= r)
//                 {
//                     cout << x << " " << y << nl;
//                     flag = true;
//                 }
//             }
//         }
//         if (!flag)
//             cout << -1 << " " << -1 << nl;
//     }

//     return 0;
// }