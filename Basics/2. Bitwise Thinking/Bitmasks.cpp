// Here I put learning lessons from Phitron and online together for this file.

// Practise

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << nl << "Checking Subsets..." << nl;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        ll sum_of_this_subset = 0;
        cout << "Mask " << mask << " Binary: " << bitset<3>(mask) << " Subset: {";

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
            {
                sum_of_this_subset += a[i];
                cout << a[i] << " ";
            }
        }
        cout << "} Sum: " << sum_of_this_subset << nl;
        if (sum_of_this_subset == s)
        {
            cout << "Subset with sum " << s << " found!" << nl;
            return 0;
        }
    }
    cout << "No subset with sum " << s << " found!" << nl;

    return 0;
}

// // Learning

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     ll s;
//     cin >> n >> s;

//     ll a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     cout << "Array: ";
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";

//     cout << nl << "Checking Subsets..." << nl;

//     // Loop over all subsets using bitmasking.
//     for (int mask = 0; mask < (1 << n); mask++)
//     {
//         ll sum_of_this_subset = 0;
//         cout << "Mask: " << mask << " Binary: " << bitset<3>(mask) << " Subset: {";
//         for (int i = 0; i < n; i++)
//         {
//             if (mask & (1 << i))
//             {
//                 sum_of_this_subset += a[i];
//                 cout << a[i] << " ";
//             }
//         }
//         cout << " } Sum: " << sum_of_this_subset << nl;
//         if (sum_of_this_subset == s)
//         {
//             cout << "Subset with sum " << s << " found!" << nl;
//             return 0;
//         }
//     }
//     cout << "No subset with sum " << s << " found!" << nl;

//     return 0;
// }

// Phitron lesson start here //

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // Bitmasks are used to store multiple boolean values in a single integer
//     // for {1,2,3,4,5,6} set, {1,4,5,6} subset can be represented as 100111
//     // for {1,2,3,4,5,6} set, {2,5} subset can be represented as 010010
//     // for {1,2,3,4,5,6} set, {1,6} subset can be represented as 100001

//     // all subset of {1,2,3} set
//     // 000 -> {}
//     // 001 -> {3}
//     // 010 -> {2}
//     // 011 -> {2,3}
//     // 100 -> {1}
//     // 101 -> {1,3}
//     // 110 -> {1,2}
//     // 111 -> {1,2,3}

//     // total subset of {1,2,..,n} set = 2^n

//     // these sequence of bits are bitmasks
//     int n;
//     cin >> n;

//     for (int i = 0; i < (1 << n); i++)
//     {
//         for (int k = 0; k < n; k++)
//         {
//             if ((i >> k) & 1)
//             {
//                 cout << 1 << " ";
//             }
//             else
//             {
//                 cout << 0 << " ";
//             }
//         }
//         cout << nl;
//     }

//     return 0;
// }