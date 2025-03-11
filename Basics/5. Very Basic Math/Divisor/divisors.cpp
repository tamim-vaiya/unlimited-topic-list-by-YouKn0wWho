#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            cout << i << nl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    divisors(n);

    return 0;
}

// void divisors(int n)
// {
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             if (n / i == i)
//             {
//                 cout << i << nl;
//             }
//             else
//             {
//                 cout << i << nl;
//                 cout << n / i << nl;
//             }
//         }
//     }
// }