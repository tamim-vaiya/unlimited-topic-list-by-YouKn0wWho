#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = -1;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            ans = i;
            break;
        }
    }
    cout << ans << nl;

    return 0;
}