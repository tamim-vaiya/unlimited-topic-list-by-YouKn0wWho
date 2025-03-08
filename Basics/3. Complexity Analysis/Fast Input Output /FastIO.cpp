#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    // FastIO
    ios::sync_with_stdio(false); // Disables the synchronization between C and C++ standard streams
    cin.tie(nullptr);            // Unties 'cin' from 'cout' to improve input performance

    // All cout will print first, then printf | Based on this video: https://www.youtube.com/watch?v=aNF4DEluWnI&ab_channel=CrapTheCoder
    // However, it is printing 1,2,3,4 for me. doesn't working on my device, I don't know why. Maybe I'm using VS code, it can be a reason.
    cout << "1" << nl;
    printf("2\n");
    cout << "3" << nl;
    printf("4\n");

    // All input will be taken first, then it will print all cout
    int x;
    cout << "First Number: ";
    cin >> x;

    int y;
    cout << "Second Number: ";
    cin >> y;

    cout << "x * y = " << x * y << nl;

    return 0;
}