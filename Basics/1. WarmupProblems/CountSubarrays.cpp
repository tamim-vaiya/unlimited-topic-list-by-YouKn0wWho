#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[j - 1])
                {
                    break;
                }
                // cout << "i -> " << a[i] << " j -> " << a[j] << nl;
                cnt++;
            }
            // cout << "i -> " << a[i] << nl;
            cnt++;
        }
        cout << cnt << nl;
    }

    return 0;
}