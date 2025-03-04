#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // // Check if a number is odd or even
    // int x1 = 5;
    // (x1 & 1) ? cout << "Odd" : cout << "Even";

    // // check if a number is a power of 2
    // int x2 = 16;
    // (x2 & (x2 - 1)) ? cout << "Not a power of 2" : cout << "Power of 2";
    // // Note: check if x == 0

    // // Finding kth bit
    // int x3 = 13;
    // int k = 3;
    // cout << "Kth bit of " << x3 << " is " << ((x3 & (1 << k)) ? 1 : 0) << nl;

    // // mul or div by 2^k
    // int x4 = 16;
    // int k1 = 2;
    // cout << "Dividing " << x4 << " by 2^" << k1 << " = " << (x4 >> k1) << nl;
    // cout << "Multiplying " << x4 << " by 2^" << k1 << " = " << (x4 << k1) << nl;

    // // find out reminder of a number when divided by 2^n
    // int x5 = 13;
    // int n = 2;
    // cout << "Reminder of " << x5 << " when divided by 2^" << n << " = " << (x5 & ((1 << n) - 1)) << nl;

    // // Swap x6 and y6
    // int x6 = 5, y6 = 10;
    // cout << "Before Swap: x6 = " << x6 << " y6 = " << y6 << nl;
    // x6 = x6 ^ y6;
    // y6 = x6 ^ y6;
    // x6 = x6 ^ y6;
    // cout << "After Swap: x6 = " << x6 << " y6 = " << y6 << nl;

    // // Property
    // if no of set bits in A = x and no of set bits in B = y
    // if no of set bits in A ^ B = z
    // then
    // z is even if x+y is even
    // z is odd if x+y is odd

    // // Useful in alot of cp problems to code faster
    // way 1
    // if (x == n)
    // {
    //     x = m;
    // }
    // else if(x == m)
    // {
    //     x = n;
    // }

    // easier way to do this
    // way 2
    // x = n ^ m ^ x;

    // // 2 Important identities useful in some cp problems
    // A + B = (A ^ B) + 2 * (A & B)
    // A + B = (A | B) + (A & B)

    // // Counting no of set bits
    // int x7 = 13;
    // cout << "No of set bits in " << x7 << " = " << __builtin_popcount(x7) << nl;

    return 0;
}