#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    // Base case
    if (n == 0)
        return;

    // Process
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << nl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 3;

    // A, B, and C are names of the rods
    towerOfHanoi(N, 'A', 'C', 'B');

    return 0;
}