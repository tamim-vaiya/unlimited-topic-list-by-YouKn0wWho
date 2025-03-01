#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    while (i < m)
    {
        if (j == n)
        {
            cout << "NO" << nl;
            return 0;
        }
        if (b[i] == a[j])
        {
            i++;
        }
        j++;
    }
    cout << "YES" << nl;

    return 0;
}