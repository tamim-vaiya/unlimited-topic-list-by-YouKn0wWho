// Understood, trying by myself, and I did it. <3 :fire:
#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void solve(string num)
{
    int n = num.size();
    ll totalSum = 0;

    for (int mask = 0; mask < (1 << (n - 1)); mask++)
    {
        ll curNum = 0;
        ll curSum = 0;

        for (int i = 0; i < n; i++)
        {
            curNum = curNum * 10 + (num[i] - '0');
            if (mask & (1 << i) || i == n - 1)
            {
                curSum += curNum;
                curNum = 0;
            }
        }
        totalSum += curSum;
    }
    cout << totalSum << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string num;
    cin >> num;
    solve(num);

    return 0;
}

// // I don't know how to solve it.

// // got it from chatgpt. need to understand
// #include <iostream>
// #include <string>

// using namespace std;

// long long sumOfAllExpressions(string num)
// {
//     int n = num.size();
//     long long totalSum = 0;

//     // There are (1 << (n - 1)) possible ways to insert '+'
//     for (int mask = 0; mask < (1 << (n - 1)); mask++)
//     {
//         long long currentSum = 0;
//         long long currentNum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             currentNum = currentNum * 10 + (num[i] - '0'); // Append digit

//             if (mask & (1 << i) || i == n - 1)
//             { // If bit is set or last digit
//                 currentSum += currentNum;
//                 currentNum = 0; // Reset for next number
//             }
//         }

//         totalSum += currentSum; // Add the sum of this expression
//     }

//     return totalSum;
// }

// int main()
// {
//     string num;
//     cin >> num;
//     cout << sumOfAllExpressions(num) << endl;
//     return 0;
// }

// // with comment
// #include <iostream>
// #include <string>

// using namespace std;

// long long sumOfAllExpressions(string num)
// {
//     int n = num.size();
//     long long totalSum = 0;

//     cout << "Number: " << num << " (Length: " << n << ")\n";
//     cout << "Total possible expressions: " << (1 << (n - 1)) << endl;

//     // Iterate over all 2^(n-1) masks
//     for (int mask = 0; mask < (1 << (n - 1)); mask++)
//     {
//         long long currentSum = 0;
//         long long currentNum = 0;

//         cout << "\nMask " << mask << " (" << bitset<9>(mask) << "): ";

//         for (int i = 0; i < n; i++)
//         {

//             currentNum = currentNum * 10 + (num[i] - '0'); // Append digit
//             cout << num[i];

//             // Check if we should insert '+'
//             if (mask & (1 << i) || i == n - 1)
//             {
//                 cout << " (+) "; // Print where we insert '+'
//                 cout << "\n  -> Formed number: " << currentNum << endl;

//                 currentSum += currentNum;
//                 currentNum = 0; // Reset for next number
//             }
//         }

//         cout << "  -> Sum of this expression: " << currentSum << endl;

//         totalSum += currentSum; // Add this expression's sum
//     }

//     cout << "\nFinal Total Sum: " << totalSum << endl;
//     return totalSum;
// }

// int main()
// {
//     string num;
//     cout << "Enter a number: ";
//     cin >> num;

//     cout << "\nCalculating all possible expressions...\n";
//     cout << "--------------------------------------\n";
//     cout << sumOfAllExpressions(num) << endl;

//     return 0;
// }
