// If you are reading this, knock me on discord(tamimvaiya) and tell me to solve this problem using bitmask.

// Learning next_permutation() {link: https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/} and trying by myself.
// This one is same code from below. but this time I know how next_permutation() works. That's it.
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> v;
    for (int i = 2; i <= 10; i++)
    {
        string s;
        for (int j = 1; j <= i / 2; j++)
        {
            s += '4';
        }
        for (int j = 1; j <= i / 2; j++)
        {
            s += '7';
        }

        do
        {
            v.emplace_back(stoll(s));
        } while (next_permutation(s.begin(), s.end()));
    }

    sort(v.begin(), v.end());
    int n;
    cin >> n;
    cout << *(lower_bound(v.begin(), v.end(), n)) << nl;

    return 0;
}

// // Got this from codeforces, I don't understand tho. I'll look over it later when I'm free:
// // If you are reading this, ask me if I have done it again or not. knock me here: tamimvaiya (discord)
// #include <iostream>
// using namespace std;
// typedef long long ll;
// ll n, mn = 1e11;
// void rec(ll x, ll c)
// {
//     if (x > 1e11)
//         return;
//     if (x >= n && c == 0)
//         mn = min(mn, x);

//     rec(x * 10 + 4, c + 1);
//     rec(x * 10 + 7, c - 1);
// }

// int main()
// {
//     cin >> n;
//     rec(0, 0);
//     cout << mn;
// }

// // Explaination of this:
// ### **📌 Understanding the Code Step by Step**
// Your code **finds the smallest lucky number** (`4` and `7` with equal counts) that is **greater than or equal to `n`** using **recursion**.

// ---

// ## **🔹 Key Observations**
// - The function `rec(x, c)` recursively generates **lucky numbers**.
// - It **stops** if `x > 1e11` (to prevent unnecessary large numbers).
// - It **checks if `x` is valid** and updates the **minimum valid lucky number**.

// ---

// ## **🔹 Step-by-Step Breakdown**
// ```cpp
// typedef long long ll;
// ll n, mn = 1e11;
// ```
// - **`n`** → Stores the input number.
// - **`mn = 1e11`** → Stores the **smallest valid lucky number**.

// ---

// ### **1️⃣ Recursive Function `rec(x, c)`**
// ```cpp
// void rec(ll x, ll c) {
//     if (x > 1e11) return;  // Stop recursion if number is too large
// ```
// - The recursion stops if `x` **exceeds `1e11`** (to prevent unnecessary calculations).

// ---

// ### **2️⃣ Checking for Valid Lucky Number**
// ```cpp
// if (x >= n && c == 0) mn = min(mn, x);
// ```
// - If `x` is **greater than or equal to `n`** and has **equal `4`s and `7`s** (`c == 0`), update `mn`.
// - **Why `c == 0`?**
//   - `c` keeps track of the difference between the number of `4`s and `7`s.
//   - If `c = 0`, it means there are **equal** `4`s and `7`s.

// ---

// ### **3️⃣ Recursive Calls**
// ```cpp
// rec(x * 10 + 4, c + 1);  // Add '4' and increase count of '4's
// rec(x * 10 + 7, c - 1);  // Add '7' and decrease count of '7's
// ```
// - Each call **adds a digit (`4` or `7`)** to `x` and **adjusts `c`**:
//   - Adding `'4'` → Increases `c` (`c+1`).
//   - Adding `'7'` → Decreases `c` (`c-1`).
// - Since it always adds `4` or `7`, the number will always be a **lucky number**.

// ---

// ### **4️⃣ Main Function**
// ```cpp
// int main() {
//     cin >> n;
//     rec(0, 0);
//     cout << mn;
// }
// ```
// - **Reads `n`** from input.
// - **Calls `rec(0, 0)`** to start generating lucky numbers.
// - **Prints the smallest valid lucky number** (`mn`).

// ---

// ## **🔹 How Does It Work for Input `4500`?**
// Let's see the recursion process:

// 1. **First calls** (building numbers):
//    ```
//    4  (c=1)
//    44 (c=2)
//    447 (c=1)
//    4477 (c=0) ✅ Found valid lucky number
//    ```

// 2. **It continues generating and finds `4747` as well**.

// 3. **Minimum valid lucky number** found is **`4747`**.

// ### **🔹 Final Output**
// ```
// 4747
// ```

// ---

// ## **🔹 Why Does This Work?**
// ✅ It **only generates valid lucky numbers** (all digits are `4` or `7`).
// ✅ The `c` counter ensures **equal `4`s and `7`s**.
// ✅ **Recursive DFS** explores **all possible lucky numbers efficiently**.
// ✅ It **stops early** if `x > 1e11`, keeping it efficient.

// 🚀 **The recursion guarantees that we find the smallest lucky number >= `n`!** 🚀

// // This one don't work

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     string s;
//     cin >> s;
//     ll n = size(s);
//     ll num = stoi(s);

//     if (n & 1)
//     {
//         // ODD
//         n++;
//         // everything same now.
//         for (int mask = 0; mask < (1 << n); mask++)
//         {
//             string ansS;
//             int four = 0, seven = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if ((mask >> i) & 1)
//                 {
//                     four++;
//                     ansS += '4';
//                 }
//                 else
//                 {
//                     seven++;
//                     ansS += '7';
//                 }
//             }
//             if (four == seven)
//             {
//                 ll newNum = stoi(ansS);
//                 if (num <= newNum)
//                 {
//                     cout << newNum << nl;
//                     return 0;
//                 }
//             }
//         }
//     }
//     else
//     {
//         // Even
//         for (int mask = 0; mask < (1 << n); mask++)
//         {
//             string ansS;
//             int four = 0, seven = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 if ((mask >> i) & 1)
//                 {
//                     four++;
//                     ansS += '4';
//                 }
//                 else
//                 {
//                     seven++;
//                     ansS += '7';
//                 }
//             }
//             if (four == seven)
//             {
//                 ll newNum = stoi(ansS);
//                 if (num <= newNum)
//                 {
//                     cout << newNum << nl;
//                     return 0;
//                 }
//             }
//         }
//     }

//     return 0;
// }

// // // Got this one from online, Did't understand yet:
// #include "bits/stdc++.h"
// using namespace std;

// #define ll long long
// #define pii pair<int, int>
// #define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
// #define ff first
// #define ss second
// #define endll '\n'
// #define rep(i, n) for (int i = 0; i++ < n;)
// #define scl(i) scanf("%lld", &i)
// #define int long long int
// #define all(n) n.begin(), n.end()
// #define mem(n, i) memset(n, i, sizeof n)
// #define em(a) emplace_back(a)
// #define pb(a) push_back(a)
// #define srep(it, vv) for (auto &it : vv)
// #define prep(it, vv) for (auto it : vv)
// #define b_s(a, b) binary_search(a.begin(), a.end(), b)
// #define l_b(a, b) lower_bound(a.begin(), a.end(), b)
// #define u_b(a, b) upper_bound(a.begin(), a.end(), b)
// #define uniq(x)
//     sort(x.begin(), x.end());
//     x.erase(unique(x.begin(), x.end()), x.end())
// // vector<vector<int>>arr(n + 5, vector<int>(m + 5,0));

// typedef vector<int> vii;
// typedef vector<pii> vpp;
// typedef vector<string> vss;

// signed main()
// {
//     vector<int> vv; // 5*1e6

//     for (int i = 2; i <= 10; i += 2)
//     {
//         string s;
//         for (int j = 1; j <= i / 2; j++)
//         {
//             s += '4';
//         }
//         for (int j = 1; j <= i / 2; j++)
//         {
//             s += '7';
//         }

//         do
//         {
//             vv.push_back(stoll(s));
//         } while (next_permutation(all(s)));
//     }

//     sort(vv.begin(), vv.end());

//     int n = 4000; // cin >> n;

//     cout << *(lower_bound(vv.begin(), vv.end(), n));
// }

// // got TLE on this code.

// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     while (true)
//     {
//         bool flag = false;
//         int m = n;
//         int cnt4 = 0, cnt7 = 0;
//         while (m > 0)
//         {
//             if ((m % 10) != 4 && (m % 10) != 7)
//             {
//                 flag = true;
//                 break;
//             }
//             else
//             {
//                 if (m % 10 == 4)
//                     cnt4++;
//                 if (m % 10 == 7)
//                     cnt7++;
//             }
//             m /= 10;
//         }
//         if (flag == false)
//         {
//             if (cnt4 == cnt7)
//             {
//                 cout << n << nl;
//                 return 0;
//             }
//         }
//         n++;
//     }

//     return 0;
// }