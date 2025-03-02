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
    int min = INT_MAX, idx = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x < min)
        {
            min = x;
            idx = i;
        }
    }

    cout << min << " " << idx << nl;

    return 0;
}