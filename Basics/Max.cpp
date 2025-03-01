#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > max)
        {
            max = x;
        }
    }
    cout << max << nl;

    return 0;
}