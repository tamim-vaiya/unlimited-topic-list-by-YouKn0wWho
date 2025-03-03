// Trying by myself.
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
        int evenBits = (n & 0xAAAAAAAA) >> 1;
        int oddBits = (n & 0x55555555) << 1;
        int ans = evenBits | oddBits;
        cout << ans << ' ';
    }

    return 0;
}

// Another solution:
// #include <bits/stdc++.h>
// using namespace std;

// #define nl '\n'
// #define ll long long

// void solve()
// {
//     unsigned int n;
//     cin >> n;
//     unsigned int ans = 0;
//     for (int i = 0; i < 32; i += 2)
//     {
//         int a = (n >> i) & 1;
//         int b = (n >> (i + 1)) & 1;
//         swap(a, b);
//         if (a)
//         {
//             ans += 1 << i;
//         }
//         if (b)
//         {
//             ans += 1 << (i + 1);
//         }
//     }
//     cout << ans << ' ';
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         solve();
//     }

//     return 0;
// }

// ----

// // lesson:
// ### **Understanding `0xAAAAAAAA` and `0x55555555`**
// These are hexadecimal numbers used as **bit masks** for extracting even and odd bits. Let's break them down:

// #### **1. `0xAAAAAAAA` (101010... in Binary)**
// - In binary, `0xAAAAAAAA` represents:
//   ```
//   10101010101010101010101010101010  (32-bit representation)
//   ```
// - The **even-indexed bits (0-based)** are `1`, and the **odd-indexed bits** are `0`.
// - This mask is used to **extract even-positioned bits** when performing a bitwise AND (`&`) with a number.

// #### **2. `0x55555555` (010101... in Binary)**
// - In binary, `0x55555555` represents:
//   ```
//   01010101010101010101010101010101  (32-bit representation)
//   ```
// - The **odd-indexed bits** are `1`, and the **even-indexed bits** are `0`.
// - This mask is used to **extract odd-positioned bits** when performing a bitwise AND (`&`) with a number.

// ---

// ### **How These Work in Bit Manipulation**
// #### **Example with Number `23` (Binary: `0001 0111`)**
// ```
// 23 in binary:  0000 0000 0000 0000 0000 0000 0001 0111
// ```
// ##### **Extract even bits**
// ```cpp
// int even_bits = (n & 0xAAAAAAAA) >> 1;
// ```
// - `n & 0xAAAAAAAA` keeps only the even bits:
//   ```
//   0000 0000 0000 0000 0000 0000 0000 0010
//   ```
// - Right shift (`>> 1`):
//   ```
//   0000 0000 0000 0000 0000 0000 0000 0001
//   ```

// ##### **Extract odd bits**
// ```cpp
// int odd_bits = (n & 0x55555555) << 1;
// ```
// - `n & 0x55555555` keeps only the odd bits:
//   ```
//   0000 0000 0000 0000 0000 0000 0001 0101
//   ```
// - Left shift (`<< 1`):
//   ```
//   0000 0000 0000 0000 0000 0000 0010 1010
//   ```

// ##### **Combine Both**
// ```cpp
// return even_bits | odd_bits;
// ```
// ```
//   0000 0000 0000 0000 0000 0000 0010 1101
// ```
// This is **45** in decimal.

// ---

// Learned from ChatGpt:
// #include <iostream>
// using namespace std;

// int swapAdjacentBits(int n)
// {
//     int even_bits = (n & 0xAAAAAAAA) >> 1; // Extract even-positioned bits and shift right
//     int odd_bits = (n & 0x55555555) << 1;  // Extract odd-positioned bits and shift left
//     return even_bits | odd_bits;           // Combine swapped bits
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     int swappedNum = swapAdjacentBits(num);
//     cout << "Number after swapping adjacent bits: " << swappedNum << endl;

//     return 0;
// }