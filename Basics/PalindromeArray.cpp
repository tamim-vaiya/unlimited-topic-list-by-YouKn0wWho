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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (a[l] != a[r])
        {
            cout << "NO" << nl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES" << nl;

    return 0;
}