#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    (pow(a, 2) + pow(b, 2) < pow(c, 2)) ? cout << "Yes" : cout << "No";

    return 0;
}