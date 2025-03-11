// // Simple Method:

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int gcd(int a, int b)
// {
//     // Find Minimum of a and b
//     int res = min(a, b);

//     // Testing divisiblity with all numbers starting from
//     // min(a, b) to 1

//     while (res > 1)
//     {

//         // If any number divide both a and b, so we
//         // got the answer
//         if (a % res == 0 && b % res == 0)
//             break;
//         res--;
//     }
//     return res;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;
//     cout << gcd(n, m);

//     return 0;
// }

// // Euclidean Algorithm
// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int gcd(int a, int b)
// {

//     // Everything divides 0
//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;

//     // If both numbers are equal
//     if (a == b)
//         return a;

//     // If a is greater
//     if (a > b)
//         return gcd(a - b, b);

//     // If b is greater
//     return gcd(a, b - a);
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int a = 12, b = 16;
//     cout << gcd(a, b);

//     return 0;
// }

// // // inbuilt __gcd() and gdc() function
// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int a = 12, b = 16;

//     // Finding gcd of a and b using __gcd() [note: use std::gcd instead of __gcd()]
//     cout << std::gcd(a, b) << endl;

//     // Finding gcd of a and b using gcd()
//     cout << gcd(a, b);

//     return 0;
// }