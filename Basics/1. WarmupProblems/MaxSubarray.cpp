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

        for (int i = 0; i < n; i++)
        {
            int max = a[i];
            for (int j = i; j < n; j++)
            {
                if (max < a[j])
                    max = a[j];
                cout << max << " ";
            }
        }
        cout << nl;
    }

    return 0;
}