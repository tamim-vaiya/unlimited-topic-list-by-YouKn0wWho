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
    bool flag = true;
    int cnt = 0;
    while (flag)
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] % 2 != 0)
            {
                flag = false;
            }
            a[i] = a[i] / 2;
        }
        if (flag)
            cnt++;
    }
    cout << cnt << nl;

    return 0;
}