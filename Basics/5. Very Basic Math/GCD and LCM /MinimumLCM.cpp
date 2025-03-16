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
        int n;
        cin >> n;
        int a = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                a = n / i;
                break;
            }
        }
        cout << a << " " << n - a << nl;
    }

    return 0;
}

// got tle in this code.

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
//         ll n;
//         cin >> n;
//         ll a = 1, b = n - 1;
//         if (a == b)
//         {
//             cout << a << " " << b << nl;
//             continue;
//         }
//         ll minLcm = INT_MAX, minA, minB;
//         while (a <= b)
//         {
//             ll lcm = (a * b) / gcd(a, b);
//             if (minLcm > lcm)
//             {
//                 minLcm = lcm;
//                 minA = a;
//                 minB = b;
//             }
//             a++;
//             b--;
//         }
//         cout << minA << " " << minB << nl;
//     }

//     return 0;
// }