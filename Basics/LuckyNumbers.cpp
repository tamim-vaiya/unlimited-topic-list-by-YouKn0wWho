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
    bool ans = true;
    for (int i = n; i <= m; i++)
    {
        int temp = i;
        bool flag = false;
        while (temp > 0)
        {
            if ((temp % 10) != 4 && (temp % 10) != 7)
            {
                flag = true;
            }
            temp /= 10;
        }
        if (flag == false)
        {
            cout << i << " ";
            ans = false;
        }
    }
    if (ans)
    {
        cout << -1 << nl;
    }

    return 0;
}